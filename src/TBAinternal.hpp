#ifndef TBAinternal
#define  TBAinternal
#include <string>
#include <sstream>
#include <algorithm>

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"
#include "curlpp/Exception.hpp"

std::string performtostring(curlpp::Easy& request, std::string& url);
bool parse(std::string& response, std::string seperator, std::string& value);
bool parselast(std::string& response, std::string seperator, std::string& value);
#endif
