#include <iostream>
#include <string>
#include <vector>

#include "TBAmatch.hpp"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>


int main(int argc, char *argv[])
{
    //declare variables
    curlpp::Easy request;
    std::string authKey = "H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string matchKey = "2017gagai_qm9";
    std::string teamKey = "frc4112";
    std::string points;

    //write value to points
    totalPoints(request, authKey, matchKey, teamKey, points);
    
    //write value to standard output
    std::cout << points << std::endl;

    return 0;
}