#ifndef TBAmatch
#define TBAmatch
#include <string>
#include <sstream>
#include <algorithm>

#include "TBAinternal.hpp"

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"
#include "curlpp/Exception.hpp"

bool disqualifiedTeams(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams);
bool wasDisqualified(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, bool& disqualified);
bool autoPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points);
bool teleopPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points);
bool totalPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points);
bool foulCount(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls);
bool techFoulCount(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls);
bool foulPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls);
bool winners(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams);
bool losers(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams);
bool didWin(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, bool& win);
#endif