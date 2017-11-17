#include "TBAmatch.hpp"
using namespace std;

bool disqualifiedTeams(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
        string disblue;
        string disred;
        parse(response, "\"dq_team_keys\": [", "]", disblue);
        parselast(response, "\"dq_team_keys\": [", "]", disred);
        string disall = disblue + disred;
		parse(disall, "\"", "\"", teams);
		return true;
	}
	else
	{
		return false;
	}
}
bool wasDisqualified(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, bool& disqualified)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string disblue;
        string disred;
        parse(response, "\"dq_team_keys\": [", "]", disblue);
        parselast(response, "\"dq_team_keys\": [", "]", disred);
        string disall = disblue + disred;
		(search(disall.begin(), disall.end(), teamKey.begin(), teamKey.end()) != disall.end()) ? (disqualified = true) : (disqualified = false);
		return true;
	}
	else
	{
		return false;
	}
}
bool autoPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string blue;
		parse(response, "\"blue\": {", "}", blue);
		string red;
		parse(response, "\"red\": {", "}", red);
		if(search(blue.begin(), blue.end(), teamKey.begin(), teamKey.end()) != blue.end())
		{
			string allianceData;
			parselast(response, "\"blue\": {", "}", allianceData);
			parse(allianceData, "\"autoPoints\": ", ",", points);
			return true;
		}
		else if (search(red.begin(), red.end(), teamKey.begin(), teamKey.end()) != red.end())
		{
			string allianceData;
			parselast(response, "\"red\": {", "}", allianceData);
			parse(allianceData, "\"autoPoints\": ", ",", points);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool teleopPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string blue;
		parse(response, "\"blue\": {", "}", blue);
		string red;
		parse(response, "\"red\": {", "}", red);
		if(search(blue.begin(), blue.end(), teamKey.begin(), teamKey.end()) != blue.end())
		{
			string allianceData;
			parselast(response, "\"blue\": {", "}", allianceData);
			parse(allianceData, "\"teleopPoints\": ", ",", points);
			return true;
		}
		else if (search(red.begin(), red.end(), teamKey.begin(), teamKey.end()) != red.end())
		{
			string allianceData;
			parselast(response, "\"red\": {", "}", allianceData);
			parse(allianceData, "\"teleopPoints\": ", ",", points);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool totalPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& points)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string blue;
		parse(response, "\"blue\": {", "}", blue);
		string red;
		parse(response, "\"red\": {", "}", red);
		if(search(blue.begin(), blue.end(), teamKey.begin(), teamKey.end()) != blue.end())
		{
			string allianceData;
			parselast(response, "\"blue\": {", "}", allianceData);
			parse(allianceData, "\"totalPoints\": ", ",", points);
			return true;
		}
		else if (search(red.begin(), red.end(), teamKey.begin(), teamKey.end()) != red.end())
		{
			string allianceData;
			parselast(response, "\"red\": {", "}", allianceData);
			parse(allianceData, "\"totalPoints\": ", ",", points);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool foulCount(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string blue;
		parse(response, "\"blue\": {", "}", blue);
		string red;
		parse(response, "\"red\": {", "}", red);
		if(search(blue.begin(), blue.end(), teamKey.begin(), teamKey.end()) != blue.end())
		{
			string allianceData;
			parselast(response, "\"blue\": {", "}", allianceData);
			parse(allianceData, "\"foulCount\": ", ",", fouls);
			return true;
		}
		else if (search(red.begin(), red.end(), teamKey.begin(), teamKey.end()) != red.end())
		{
			string allianceData;
			parselast(response, "\"red\": {", "}", allianceData);
			parse(allianceData, "\"foulCount\": ", ",", fouls);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool techFoulCount(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string blue;
		parse(response, "\"blue\": {", "}", blue);
		string red;
		parse(response, "\"red\": {", "}", red);
		if(search(blue.begin(), blue.end(), teamKey.begin(), teamKey.end()) != blue.end())
		{
			string allianceData;
			parselast(response, "\"blue\": {", "}", allianceData);
			parse(allianceData, "\"techFoulCount\": ", ",", fouls);
			return true;
		}
		else if (search(red.begin(), red.end(), teamKey.begin(), teamKey.end()) != red.end())
		{
			string allianceData;
			parselast(response, "\"red\": {", "}", allianceData);
			parse(allianceData, "\"techFoulCount\": ", ",", fouls);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool foulPoints(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, std::string& fouls)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string blue;
		parse(response, "\"blue\": {", "}", blue);
		string red;
		parse(response, "\"red\": {", "}", red);
		if(search(blue.begin(), blue.end(), teamKey.begin(), teamKey.end()) != blue.end())
		{
			string allianceData;
			parselast(response, "\"blue\": {", "}", allianceData);
			parse(allianceData, "\"foulPoints\": ", ",", fouls);
			return true;
		}
		else if (search(red.begin(), red.end(), teamKey.begin(), teamKey.end()) != red.end())
		{
			string allianceData;
			parselast(response, "\"red\": {", "}", allianceData);
			parse(allianceData, "\"foulPoints\": ", ",", fouls);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool winners(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string winningAlliance;
		parse(response, "\"winning_alliance\": \"", "\"", winningAlliance);
		if(winningAlliance == "blue")
		{
			string allianceTeams;
			parse(response, "\"team_keys\": [", "]", allianceTeams);
			parse(allianceTeams, "\"", "\"", teams);
			return true;
		}
		else if (winningAlliance == "red")
		{
			string allianceTeams;
			parselast(response, "\"team_keys\": [", "]", allianceTeams);
			parse(allianceTeams, "\"", "\"", teams);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool losers(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, std::vector<std::string>& teams)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string winningAlliance;
		parse(response, "\"winning_alliance\": \"", "\"", winningAlliance);
		if(winningAlliance == "blue")
		{
			string allianceTeams;
			parselast(response, "\"team_keys\": [", "]", allianceTeams);
			parse(allianceTeams, "\"", "\"", teams);
			return true;
		}
		else if (winningAlliance == "red")
		{
			string allianceTeams;
			parse(response, "\"team_keys\": [", "]", allianceTeams);
			parse(allianceTeams, "\"", "\"", teams);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool didWin(curlpp::Easy& request, const std::string& AuthKey, const std::string& matchKey, const std::string& teamKey, bool& win)
{
    string url = "https://www.thebluealliance.com/api/v3/match/" + matchKey + AuthKey;
	string response = performtostring(request, url);
	if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}" && response != "")
	{
		string winningAlliance;
		parse(response, "\"winning_alliance\": \"", "\"", winningAlliance);
		if(winningAlliance == "blue")
		{
			string allianceTeams;
			parse(response, "\"team_keys\": [", "]", allianceTeams);
			win = parse(allianceTeams, teamKey, allianceTeams);
			return true;
		}
		else if (winningAlliance == "red")
		{
			string allianceTeams;
			parselast(response, "\"team_keys\": [", "]", allianceTeams);
			win = parse(allianceTeams, teamKey, allianceTeams);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}