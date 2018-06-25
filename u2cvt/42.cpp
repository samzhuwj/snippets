#include <iostream>
#include <vector>

std::vector<int> FindSubstringMatches(std::string theString, std::string substring);

int main()
{
  std::string phrase = "To be or not to be";
  std::vector<int> matches = FindSubstringMatches(phrase, "be");

  for(int i = 0; i < matches.size(); ++i){
    std::cout << matches[i] << "\n";
  }

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
