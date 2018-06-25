#include <iostream>
#include <vector>

std::string VectorToString(std::vector<std::string>& vec, char separator);

int main()
{
  std::vector<std::string> vCusts(3);
  vCusts[0] = "Bob";
  vCusts[1] = "Sue";
  vCusts[2] = "Tom";

  std::string sCusts = VectorToString(vCusts, ' ');
  std::cout << sCusts << "\n";

  return 0;
}

std::string VectorToString(std::vector<std::string>& vec, char separator)
{
  std::string theString = "";
  for(auto cust: vec)
    theString += cust + separator;

  return theString;
}
