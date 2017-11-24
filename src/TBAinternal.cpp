#include "TBAinternal.hpp"
using namespace std;

string performtostring(curlpp::Easy& request, string& url)
{
  //returns TBA response as string to be parsed
  try {
    string userAgent = "4112-Cpp-Scouting/1.0.1 https://goo.gl/RLJpkt";
    request.setOpt(new curlpp::options::Url(url));
    request.setOpt(new curlpp::options::UserAgent(userAgent));
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
  //use to parse for value after FIRST occurence of seperator
  string::iterator start, end;
  start = search(response.begin(), response.end(), seperator.begin(), seperator.end());
  if (start != response.end())
  {
    advance(start, seperator.length());
    end = start;
    advance(end, value.length());
    copy(start, end, value.begin());
    return true;
  }
  else 
  {
    return false;
  }  
}

bool parse(std::string& response, std::string seperator1, std::string seperator2, std::string& value)
{
  //use to parse for value between first occurence of two seperators
  string::iterator start, end;
  start = response.begin();
  start = search(start, response.end(), seperator1.begin(), seperator1.end());
  if (start != response.end())
  {
    advance(start, seperator1.length());
    end = search(start, response.end(), seperator2.begin(), seperator2.end());
    value.resize(std::distance(start, end));
    copy(start, end, value.begin());
    return true;
  }
  else
  {
    return false;
  }
  
}

bool parse(std::string& response, std::string seperator1, std::string seperator2, std::vector<std::string>& values)
{
  //use to parse for values between first occurence of two seperators
  std::string value;
  string::iterator start, end;
  start = response.begin();
  start = search(start, response.end(), seperator1.begin(), seperator1.end());
  if (start != response.end())
  {
    while (start != response.end())
    {
    
    advance(start, seperator1.length());
    end = search(start, response.end(), seperator2.begin(), seperator2.end());
    value.resize(std::distance(start, end));
    copy(start, end, value.begin());
    values.push_back(value);
    start = end;
    start++;
    value.clear();
    start = search(start, response.end(), seperator1.begin(), seperator1.end());
    }
    return true;
  }
  else 
  {
    return false;
  }

  
}

bool parse(std::string& response, std::string seperator1, std::string seperator2, std::string seperator3, std::map<std::string, std::string>& values)
{
  // use to parse pairs of values between two seperators
  std::string first;
  std::string second;
  string::iterator start, middle, end;
  start = response.begin();
  start = search(start, response.end(), seperator1.begin(), seperator1.end());
  if (start != response.end())
  {
    while (start != response.end())
    {
    advance(start, seperator1.length());
    middle = search(start, response.end(), seperator2.begin(), seperator2.end());
    first.resize(std::distance(start, middle));
    copy(start, middle, first.begin());
    advance(middle, seperator2.length());
    end = search(middle, response.end(), seperator3.begin(), seperator3.end());
    second.resize(std::distance(middle, end));
    copy(middle, end, second.begin());
    values[first] = second;
    start = end;
    start++;
    first.clear();
    second.clear();
    start = search(start, response.end(), seperator1.begin(), seperator1.end());
    }
    return true;
  }
  else
  {
    return false;
  }
  
  
}

bool parselast(std::string& response, std::string seperator, std::string& value)
{
  //finds value within TBA response after LAST occurence of seperator
  string::iterator start, end;
  start = find_end(response.begin(), response.end(), seperator.begin(), seperator.end());
  if (start != response.end())
  {
    advance(start, seperator.length());
    end = start;
    advance(end, value.length());
    copy(start, end, value.begin());
    return true;
  }
  else
  {
    return false;
  }
}

bool parselast(std::string& response, std::string seperator1, std::string seperator2, std::string& value)
{
  //use to parse for value between last occurence of two seperators
  string::iterator start, end;
  start = response.begin();
  start = find_end(start, response.end(), seperator1.begin(), seperator1.end());
  if (start != response.end())
  {
    advance(start, seperator1.length());
    end = search(start, response.end(), seperator2.begin(), seperator2.end());
    value.resize(std::distance(start, end));
    copy(start, end, value.begin());
    return true;
  }
  else
  {
    return false;
  }
}
