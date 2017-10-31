#include "TBAstatus.hpp"
#include <sstream>
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
  try {
	  string url = "https://www.thebluealliance.com/api/v3/status" + Key;
	  request.setOpt(new curlpp::options::Url(url));
	  ostringstream requeststream;
	  request.setOpt(new curlpp::options::WriteStream(&requeststream));
	  request.perform();
	  string response = requeststream.str();
	  if (response != "{\"Error\": \"X-TBA-Auth-Key is invalid. Please get an access key at http://www.thebluealliance.com/account.}") {
	    string seperator = "\"current_season\": ";
	    string::iterator start, end;
	    start = find_end(response.begin(), response.end(), seperator.begin(), seperator.end());
	    advance(start, seperator.length());
	    end = start;
	    advance(end, 4);
	    copy(start, end, season.begin());
	    return 0;
    } else {
      return false;
    }
  }
  catch ( curlpp::LogicError & e ) {
	std::cout << e.what() << std::endl;
    season = "";
    return false;
  }
  catch ( curlpp::RuntimeError & e ) {
	std::cout << e.what() << std::endl;
    season = "";
    return false;
  }
};
