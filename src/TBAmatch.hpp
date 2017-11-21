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
// gets a vector of all teams disqualified in a match
bool wasDisqualified(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, bool& disqualified);
// gets if a specific team was disqualified from a match
bool autoPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points);
// gets the auto points of an alliance in a match
bool teleopPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points);
// gets the teleop points of an alliance in a match
bool totalPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points);
// gets the total points of an alliance in a match
bool foulCount(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls);
// gets the number of fouls caused by an alliance in a match
bool techFoulCount(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls);
// gets the number of tech fouls caused by an alliance in a match
bool foulPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points);
// gets the number of points an alliance recieved from fouls
bool winners(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams);
// gets the teamKeys of the winners of a match
bool losers(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams);
// gets the teamKeys of the losers of a match
bool didWin(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, bool& win);
// gets whether or not a team won a match
#endif