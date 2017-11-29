#include <iostream>
#include <string>
#include <vector>

#include "TBAdistrict.hpp"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>


int main(int argc, char *argv[])
{
    //declare variables
    curlpp::Easy request;
    std::string authKey = "H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string districtKey = "2017pch";
    std::vector<std::string> teams;

    //write values to teams
    districtTeams(request, authKey, districtKey, teams);
    
    //write values to standard output
    for (std::vector<std::string>::iterator i = teams.begin(); i != teams.end(); i++)
    {
    	std::cout << *i << std::endl;
    }

    return 0;
}