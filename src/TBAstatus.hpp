#ifndef TBAstat
#define  TBAstat
#include <string>
#include <sstream>
#include <algorithm>

#include "TBAinternal.hpp"

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"
#include "curlpp/Exception.hpp"

bool androidVer(curlpp::Easy& request, const std::string& Key, std::string& version);
//gets the current version of the TBA android app
bool iosVer(curlpp::Easy& request, const std::string& Key, std::string& version);
//gets the current version of the TBA ios app
bool currentSeason(curlpp::Easy& request, const std::string& Key, std::string& season);
//gets the year of the current FRC season
#endif
