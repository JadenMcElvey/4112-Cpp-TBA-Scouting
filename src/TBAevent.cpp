#include "TBAevent.hpp"
using namespace std;

bool teamsAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& teams)
{
	// gets all the teams at an event
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/teams/keys" + AuthKey;
	string response = performtostring(request, url);
	if (!parseError(response) && response != "")
	{
		parse(response, "\"", "\"", teams);
		return true;
	}
	else
	{
		return false;
	}
}
bool opr(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& oprs)
{
	// gets a map of the team keys and oprs of all the teams at an event
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs" + AuthKey;
	string response = performtostring(request, url);
	if (!parseError(response) && response != "")
	{
        string opr = "";
        parse(response, "\"oprs\": {", "}", opr);
		parse(opr, "\"", "\": ", ",", oprs);
		return true;
	}
	else
	{
		return false;
	}
}
bool dpr(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& dprs)
{
	// gets a map of the team keys and dprs of all the teams at an event
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs" + AuthKey;
	string response = performtostring(request, url);
	if (!parseError(response) && response != "")
	{
        string dpr = "";
        parse(response, "\"dprs\": {", "}", dpr);
		parse(dpr, "\"", "\": ", ",", dprs);
		return true;
	}
	else
	{
		return false;
	}
}
bool ccwm(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::map<std::string, std::string>& ccwms)
{
	// gets a map of the team keys and ccwms of all the teams at an event
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs" + AuthKey;
	string response = performtostring(request, url);
	if (!parseError(response) && response != "")
	{
        string ccwm = "";
        parse(response, "\"ccwms\": {", "}", ccwm);
		parse(ccwm, "\"", "\": ", ",", ccwms);
		return true;
	}
	else
	{
		return false;
	}
}
bool matchesAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& matches)
{
	// gets all the matchKeys of an event
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/matches/keys" + AuthKey;
	string response = performtostring(request, url);
	if (!parseError(response) && response != "")
	{
		parse(response, "\"", "\"", matches);
		return true;
	}
	else
	{
		return false;
	}
}