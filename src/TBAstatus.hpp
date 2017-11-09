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
bool iosVer(curlpp::Easy& request, const std::string& Key, std::string& version);
bool currentSeason(curlpp::Easy& request, const std::string& Key, std::string& season);
#endif
