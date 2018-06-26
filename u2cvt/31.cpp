#include <iostream>
#include <vector>

int main()
{
  std::vector<std::string> strVec(10);

  std::string str("I'm a string");
  strVec[0] = str;

  std::string str2(str);
  strVec[1] = str2;

  std::string str3(str, 4);
  strVec[2] = str3;

  std::string str4(10, 'x');
  strVec[3] = str4;

  strVec[4] = str.append(" and you are not");
  str += " and you are not";

  str.append(str, 40, 44);
  strVec[5] = str;

  str.erase(13, str.length() - 1);
  strVec[6] = str;

  for(auto y: strVec)
    std::cout << y << "\n";

  return 0;
}
