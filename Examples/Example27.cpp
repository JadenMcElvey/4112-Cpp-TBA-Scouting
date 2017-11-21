#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

#include "TBAevent.hpp"
#include "TBAmatch.hpp"
#include "TBAteam.hpp"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>

int main(int argc, char *argv[])
{
    //declare variables
    curlpp::Easy request;
    std::string authKey = "?X-TBA-Auth-Key=H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string eventKey = "2017gagai";
    std::vector<std::string> teamKeys;

    //write csv header to standard output
    std::cout << "TeamNumber,AutoPointAvg,TeleopPointAvg,TotalPointAvg,OPR,DPR,CCWM" << std::endl;

    //write team keys to the vector teamKeys
    teamsAtEvent(request, authKey, eventKey, teamKeys);

    //loop run for every team Key present at event
    for(std::vector<std::string>::iterator teamKey = teamKeys.begin(); teamKey != teamKeys.end(); teamKey++)
    {
        //get vector of matches a team is participating in
        std::vector<std::string> matchKeys;
        teamMatchesAtEvent(request, authKey, *teamKey, eventKey, matchKeys);
        //create matchKey iterator
        std::vector<std::string>::iterator matchKey;
        //remove all match keys from matchKeys that are not qualifier matches
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); ++matchKey)
        {
            std::string qualifierMatch = "qm";
            if (search(matchKey->begin(), matchKey->end(), qualifierMatch.begin(), qualifierMatch.end()) == matchKey->end())
            {
                matchKeys.erase(matchKey);
                --matchKey;
            }
        }
        //calculate autonomous point average
        std::string points;
        float autoAvg = 0.0;
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); matchKey++)
        {
                autoPoints(request, authKey, *matchKey, *teamKey, points);
                autoAvg += stof(points);
        }
        autoAvg /= matchKeys.size();
        //calculate teleop point average
        float teleopAvg = 0.0;
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); matchKey++)
        {
                teleopPoints(request, authKey, *matchKey, *teamKey, points);
                teleopAvg += stof(points);
        }
        teleopAvg /= matchKeys.size();
        //calculate total point average ignoring points from fouls
        std::string foulPointValue;
        float totalAvg = 0.0;
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); matchKey++)
        {
                totalPoints(request, authKey, *matchKey, *teamKey, points);
                foulPoints(request, authKey, *matchKey, *teamKey, foulPointValue);
                totalAvg += (stof(points)-stof(foulPointValue));
        }
        totalAvg /= matchKeys.size();
        //create map of team key and opr pairs
        std::map<std::string, std::string> oprValues;
        opr(request, authKey, eventKey, oprValues);
        //create map of team key and dpr pairs
        std::map<std::string, std::string> dprValues;
        dpr(request, authKey, eventKey, dprValues);
        //create map of team key and ccwm pairs
        std::map<std::string, std::string> ccwmValues;
        ccwm(request, authKey, eventKey, ccwmValues);
        //get team number from team key
        std::string teamNum;
        teamNum.resize(std::distance(teamKey->begin() + 3, teamKey->end()));
        copy(teamKey->begin() + 3, teamKey->end(), teamNum.begin());
        
        //write all values seperated by commas to standard output then make new line
        std::cout  << teamNum << "," << std::setprecision(5) << autoAvg << "," << teleopAvg << "," << totalAvg << "," << stof(oprValues[*teamKey]) << "," << stof(dprValues[*teamKey]) << "," << stof(ccwmValues[*teamKey]) << std::endl;
    }
    return 0;
}