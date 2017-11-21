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
    curlpp::Easy request;
    std::string authKey = "?X-TBA-Auth-Key=H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string eventKey = "2017gagai";
    std::vector<std::string> teamKeys;

    std::cout << "TeamNumber,AutoPointAvg,TeleopPointAvg,TotalPointAvg,OPR,DPR,CCWM" << std::endl;

    teamsAtEvent(request, authKey, eventKey, teamKeys);

    for(std::vector<std::string>::iterator teamKey = teamKeys.begin(); teamKey != teamKeys.end(); teamKey++)
    {
        std::vector<std::string> matchKeys;
        teamMatchesAtEvent(request, authKey, *teamKey, eventKey, matchKeys);
        std::vector<std::string>::iterator matchKey;
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); ++matchKey)
        {
            std::string qualifierMatch = "qm";
            if (search(matchKey->begin(), matchKey->end(), qualifierMatch.begin(), qualifierMatch.end()) == matchKey->end())
            {
                matchKeys.erase(matchKey);
                --matchKey;
            }
        }
        std::string points;
        float autoAvg = 0.0;
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); matchKey++)
        {
                autoPoints(request, authKey, *matchKey, *teamKey, points);
                autoAvg += stof(points);
        }
        autoAvg /= matchKeys.size();
        float teleopAvg = 0.0;
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); matchKey++)
        {
                teleopPoints(request, authKey, *matchKey, *teamKey, points);
                teleopAvg += stof(points);
        }
        teleopAvg /= matchKeys.size();
        std::string foulPointValue;
        float totalAvg = 0.0;
        for(matchKey = matchKeys.begin(); matchKey != matchKeys.end(); matchKey++)
        {
                totalPoints(request, authKey, *matchKey, *teamKey, points);
                foulPoints(request, authKey, *matchKey, *teamKey, foulPointValue);
                totalAvg += (stof(points)-stof(foulPointValue));
        }
        totalAvg /= matchKeys.size();
        std::map<std::string, std::string> oprValues;
        opr(request, authKey, eventKey, oprValues);
        std::map<std::string, std::string> dprValues;
        dpr(request, authKey, eventKey, dprValues);
        std::map<std::string, std::string> ccwmValues;
        ccwm(request, authKey, eventKey, ccwmValues);
        std::string teamNum;
        teamNum.resize(std::distance(teamKey->begin() + 3, teamKey->end()));
        copy(teamKey->begin() + 3, teamKey->end(), teamNum.begin());
        
        std::cout  << teamNum << "," << std::setprecision(5) << autoAvg << "," << teleopAvg << "," << totalAvg << "," << stof(oprValues[*teamKey]) << "," << stof(dprValues[*teamKey]) << "," << stof(ccwmValues[*teamKey]) << std::endl;
    }
    return 0;
}