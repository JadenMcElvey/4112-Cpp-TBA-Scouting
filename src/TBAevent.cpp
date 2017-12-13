#include "TBAevent.hpp"
using namespace std;

bool teamsAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& teams)
{
	// gets all the teams at an event
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/teams/keys";
	string response = performtostring(request, url, AuthKey);
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs";
	string response = performtostring(request, url, AuthKey);
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs";
	string response = performtostring(request, url, AuthKey);
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs";
	string response = performtostring(request, url, AuthKey);
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/matches/keys";
	string response = performtostring(request, url, AuthKey);
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
bool qualsAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& matches)
{
	// gets all the matchKeys of an event
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/matches/keys";
	string response = performtostring(request, url, AuthKey);
	if (!parseError(response) && response != "")
	{
		parse(response, "\"", "\"", matches);
		std::vector<std::string>::iterator matchKey;
		for(matchKey = matches.begin(); matchKey != matches.end(); ++matchKey)
        {
            std::string qualifierMatch = "qm";
            if (search(matchKey->begin(), matchKey->end(), qualifierMatch.begin(), qualifierMatch.end()) == matchKey->end())
            {
                matches.erase(matchKey);
                --matchKey;
            }
        }
		return true;
	}
	else
	{
		return false;
	}
}