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
bool opr(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& oprs);
bool dpr(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& dprs);
bool ccwm(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& ccwms);
bool matchesAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& matches);
#endif