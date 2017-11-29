#include <iostream>
#include <string>

#include "TBAstatus.hpp"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>


int main(int argc, char *argv[])
{
    //declare variables
    curlpp::Easy request;
    std::string Key = "H5B8Nt9mX2aFB3LocyRrZEpF7y9XwIWBST3tJRO0cOcqqs4AMwyl71K7zdFNlp16";
    std::string version;

    //write value to version
    androidVer(request, Key, version);

    //write value to standard output
    std::cout << version << std::endl;

    return 0;
}