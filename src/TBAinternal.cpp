#include "TBAinternal.hpp"
using namespace std;

string performtostring(curlpp::Easy& request, string& url)
{
  try {
    request.setOpt(new curlpp::options::Url(url));
    ostringstream requeststream;
    request.setOpt(new curlpp::options::WriteStream(&requeststream));
    request.perform();
    return requeststream.str();
  }
  catch ( curlpp::LogicError & e ) {
  cout << e.what() << endl;
    return "";
  }
  catch ( curlpp::RuntimeError & e ) {
  cout << e.what() << endl;
    return "";
  }
}

bool parse(std::string& response, std::string seperator, std::string& value)
{
  string::iterator start, end;
  start = search(response.begin(), response.end(), seperator.begin(), seperator.end());
  advance(start, seperator.length());
  end = start;
  advance(end, value.length());
  copy(start, end, value.begin());
  return true;
}

bool parselast(std::string& response, std::string seperator, std::string& value)
{
  string::iterator start, end;
  start = find_end(response.begin(), response.end(), seperator.begin(), seperator.end());
  advance(start, seperator.length());
  end = start;
  advance(end, value.length());
  copy(start, end, value.begin());
  return true;
}
