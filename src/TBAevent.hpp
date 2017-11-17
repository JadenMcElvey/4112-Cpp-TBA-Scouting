#ifndef TBAevent
#define TBAevent
#include <string>
#include <sstream>
#include <algorithm>

#include "TBAinternal.hpp"

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"
#include "curlpp/Exception.hpp"

bool teamsAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& teams);
// gets all the teams at an event
bool opr(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& oprs);
// gets a map of the team keys and oprs of all the teams at an event
bool dpr(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& dprs);
// gets a map of the team keys and dprs of all the teams at an event
bool ccwm(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& ccwms);
// gets a map of the team keys and ccwms of all the teams at an event
bool matchesAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& matches);
// gets all the matchKeys of an event
#endif