#include <iostream>
#include <sstream>
#include <vector>

std::vector<std::string> StringToVector(std::string, char separator);

int main()
{
  std::string sSentence = "This is a random string";
  std::vector<std::string> vec = StringToVector(sSentence, ' ');

  for(int i = 0; i < vec.size(); ++i){
    std::cout << vec[i] << "\n";
  }

  return 0;
}

std::vector<std::string> StringToVector(std::string, char separator)
{
  std::string sSentence = "This is a random string";
  std::vector<std::string> vecsWords;
  std::stringstream ss(sSentence);
  std::string sIndivStr;

  while(getline(ss, sIndivStr, separator)){
    vecsWords.push_back(sIndivStr);
  }

  return vecsWords;
}
