#include <iostream>
#include <string>
#include <vector>

#include "TBAteam.hpp"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>


int main(int argc, char *argv[])
{
    //declare variables
    curlpp::Easy request;
    std::string authKey = "H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string teamKey = "frc4112";
    std::string eventKey = "2017gagai";
    std::vector<std::string> awards;

    //write values to awards
    teamAwardsAtEvent(request, authKey, teamKey, eventKey, awards);
    
    //write values to standard output
    for (std::vector<std::string>::iterator i = awards.begin(); i != awards.end(); i++)
    {
    	std::cout << *i << std::endl;
    }

    return 0;
}