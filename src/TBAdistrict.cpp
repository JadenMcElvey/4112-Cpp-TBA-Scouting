#include "TBAdistrict.hpp"
using namespace std;

bool districtEvents(curlpp::Easy& request, const std::string& AuthKey, const std::string& districtKey, std::vector<std::string>& events)
{
	// gets all the events in a district
    string url = "https://www.thebluealliance.com/api/v3/district/" + districtKey + "/events/keys" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		parse(response, "\"", "\"", events);
		return true;
	}
	else
	{
		return false;
	}
}

bool districtTeams(curlpp::Easy& request, const std::string& AuthKey, const std::string& districtKey, std::vector<std::string>& teams)
{
	// gets all the teams in a district
    string url = "https://www.thebluealliance.com/api/v3/district/" + districtKey + "/teams/keys" + AuthKey;
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