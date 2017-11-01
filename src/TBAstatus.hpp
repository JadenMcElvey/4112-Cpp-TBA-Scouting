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

bool androidver(curlpp::Easy& request, const std::string& Key, std::string& version);
bool iosver(curlpp::Easy& request, const std::string& Key, std::string& version);
bool currentseason(curlpp::Easy& request, const std::string& Key, std::string& season);
#endif
