#include "TBAevent.hpp"
using namespace std;

bool teamsAtEvent(curlpp::Easy& request, const std::string& AuthKey, const std::string& eventKey, std::vector<std::string>& teams)
{
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/teams/keys" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/oprs" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
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
    string url = "https://www.thebluealliance.com/api/v3/event/" + eventKey + "/matches/keys" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		parse(response, "\"", "\"", matches);
		return true;
	}
	else
	{
		return false;
	}
}