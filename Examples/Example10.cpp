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
    curlpp::Easy request;
    std::string authKey = "?X-TBA-Auth-Key=H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string eventKey = "2017gagai";
    std::vector<std::string> matches;

    matchesAtEvent(request, authKey, eventKey, matches);
    
    for (std::vector<std::string>::iterator i = matches.begin(); i != matches.end(); i++)
    {
    	std::cout << *i << std::endl;
    }

    return 0;
}