#include "TBAstatus.hpp"
using namespace std;

bool androidver(curlpp::Easy& request, const std::string& Key, std::string& version)
{
	return false;
}

bool iosver(curlpp::Easy& request, const std::string& Key, std::string& version)
{
	return false;
}

bool currentseason(curlpp::Easy& request, const std::string& Key, std::string& season)
{
	season.resize(4);
	string url = "https://www.thebluealliance.com/api/v3/status" + Key;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		parse(response, "\"current_season\": ", season);
		return true;
	}
	else
	{
		return false;
	}
}
