#include "TBAstatus.hpp"
using namespace std;

bool androidVer(curlpp::Easy& request, const std::string& AuthKey, std::string& version)
{
	//gets the current version of the TBA android app
	version.resize(7);
	string url = "https://www.thebluealliance.com/api/v3/status" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		parse(response, "\"latest_app_version\": ", version);
		return true;
	}
	else
	{
		return false;
	}
}

bool iosVer(curlpp::Easy& request, const std::string& AuthKey, std::string& version)
{
	//gets the current version of the TBA ios app
	version.resize(2);
	string url = "https://www.thebluealliance.com/api/v3/status" + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		parselast(response, "\"latest_app_version\": ", version);
		return true;
	}
	else
	{
		return false;
	}
}

bool currentSeason(curlpp::Easy& request, const std::string& AuthKey, std::string& season)
{
	//gets the year of the current FRC season
	season.resize(4);
	string url = "https://www.thebluealliance.com/api/v3/status" + AuthKey;
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
