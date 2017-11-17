#ifndef TBAdistrict
#define TBAdistrict
#include <string>
#include <sstream>
#include <algorithm>

#include "TBAinternal.hpp"

#include "curlpp/cURLpp.hpp"
#include "curlpp/Easy.hpp"
#include "curlpp/Options.hpp"
#include "curlpp/Exception.hpp"

bool districtEvents(curlpp::Easy& request, const std::string& AuthKey, const std::string& District, std::vector<std::string>& events);
// gets all the events in a district
bool districtTeams(curlpp::Easy& request, const std::string& AuthKey, const std::string& District, std::vector<std::string>& teams);
// gets all the teams in a district
#endif