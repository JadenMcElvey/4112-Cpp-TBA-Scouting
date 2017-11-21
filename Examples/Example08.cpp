#include <iostream>
#include <string>
#include <map>

#include "TBAevent.hpp"

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
    std::map<std::string, std::string> stats;

    //write value pairs to stats
    dpr(request, authKey, eventKey, stats);
    
    //write value pairs to standard output
    for (std::map<std::string, std::string>::iterator i = stats.begin(); i != stats.end(); i++)
    {
    	std::cout << i->first << ": " << i->second << std::endl;
    }

    return 0;
}