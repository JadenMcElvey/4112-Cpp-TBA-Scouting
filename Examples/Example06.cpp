#include <iostream>
#include <string>
#include <vector>

#include "TBAevent.hpp"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>


int main(int argc, char *argv[])
{
    //declare variables
    curlpp::Easy request;
    std::string authKey = "H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string eventKey = "2017gagai";
    std::vector<std::string> teams;

    //write values to teams
    teamsAtEvent(request, authKey, eventKey, teams);
    
    //write values to standard output
    for (std::vector<std::string>::iterator i = teams.begin(); i != teams.end(); i++)
    {
    	std::cout << *i << std::endl;
    }

    return 0;
}