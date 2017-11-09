#ifndef TBAinternal
#define  TBAinternal
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"
#include "curlpp/Exception.hpp"

std::string performtostring(curlpp::Easy& request, std::string& url);
// returns TBA response as string to be parsed
bool parse(std::string& response, std::string seperator, std::string& value);
// use to parse for value after FIRST occurence of seperator
bool parse(std::string& response, std::string seperator1, std::string seperator2, std::string& value);
// use to parse for value between first occurence of two seperators
bool parse(std::string& response, std::string seperator1, std::string seperator2, std::vector<std::string>& values);
// use to parse for values between first occurence of two seperators
bool parselast(std::string& response, std::string seperator, std::string& value);
// finds value within TBA response after LAST occurence of seperator
bool parselast(std::string& response, std::string seperator1, std::string seperator2, std::string& value);
// use to parse for value between last occurence of two seperators
#endif
