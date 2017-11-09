#ifndef TBAteam
#define  TBAteam
#include <string>
#include <sstream>
#include <algorithm>

#include "TBAinternal.hpp"

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"
#include "curlpp/Exception.hpp"

bool teamDistrict(curlpp::Easy& request, const std::string& AuthKey, const std::string& teamKey, std::string& district);
// gets the district of a team (requires teamKey)
bool teamEvents(curlpp::Easy& request, const std::string& AuthKey, const std::string& teamKey, std::vector<std::string>& events);
// gets all event keys a team has or will compete at (requires teamKey)
bool yearTeamEvents(curlpp::Easy& request, const std::string& AuthKey, const std::string& teamKey, std::string& year, std::vector<std::string>& events);
// gets all event keys from a single FRC season (requires teamKey and year)
bool teamMatchesAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& teamKey, const std::string& eventKey, std::vector<std::string>& matches);
// get a teams matches at an event (requires teamKey and eventKey)
bool teamAwardsAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& teamKey, const std::string& eventKey, std::vector<std::string>& awards);
// get a teams awards at an event (requires teamKey and eventKey)
#endif
