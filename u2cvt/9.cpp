// iteration control, while, for
// sstream, std::string, std::vector, std::stringstream
#include <iostream>
#include <vector>
#include <sstream>

int main(int argc, char* argv[])
{
  std::string sSentence = "This is a random string";
  std::vector<std::string> vecsWords;
  std::stringstream ss(sSentence);
  std::string sIndivStr;
  char cSpace = ' ';

  while(getline(ss, sIndivStr, cSpace)){
    vecsWords.push_back(sIndivStr);
  }

  for(int i = 0; i < vecsWords.size(); ++i){
    std::cout << vecsWords[i] << "\n";
  }

  return 0;
}
