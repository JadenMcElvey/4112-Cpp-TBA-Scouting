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
    curlpp::Easy request;
    std::string authKey = "?X-TBA-Auth-Key=H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string districtKey = "2017pch"
    std::vector<std::string> events;

    districtEvents(request, authKey, districtKey, events);

    for (vector<string>::iterator i = events.begin(); i != events.end(); i++)
    {
    	cout << *i << endl;
    }

    return 0;
}