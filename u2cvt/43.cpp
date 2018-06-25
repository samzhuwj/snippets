#include <iostream>
#include <vector>

std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString);

int main()
{
std::cout << ReplaceAllSubstrings("to know or not to know", "know", "be") << "\n";

  return 0;
}

std::vector<int> FindSubstringMatches(std::string theString, std::string substring)
{
  std::vector<int> matchingIndexes;
  int index = theString.find(substring, 0);

  while(index != std::string::npos){
    matchingIndexes.push_back(index);
    index = theString.find(substring, index + 1);
  }

  return matchingIndexes;
}

std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString)
{
  std::vector<int> matches = FindSubstringMatches(theString, substring);

  if(matches.size() != 0){
    int lengthDifference = newString.size() - substring.size();


    int timesLooped = 0;

    for(auto index: matches){
      theString.replace(index + (timesLooped * lengthDifference), substring.size(), newString);
      timesLooped++;
    }
  }

  return theString;

}
