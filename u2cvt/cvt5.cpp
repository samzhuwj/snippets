#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>


int main() {

  // A C character string is an array of characters
  // with a null character at the end \0
  char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};
  std::cout << cString << "\n";

  // Get array size (null is included)
  std::cout << "Array Size " << sizeof(cString) << "\n";

  // C strings are troublesome because if you forget \0, or
  // add to much information it can lead your program to crash,
  // or for your system to crash

  // You can create a vector of strings
  std::vector<std::string> strVec(10);

  // C++ std::string can grow in size and is much safer
  std::string str("I'm a string");
  strVec[0] = str;

  // You can access characters with an index
  std::cout << str[0] << "\n";

  // You can also use at()
  std::cout << str.at(0) << "\n";

  // Front returns first char and back returns last
  std::cout << str.front() << " " << str.back() << "\n";

  // Get the string length
  std::cout << "Length : " << str.length() << "\n";

  // You can copy a string to another
  std::string str2(str);
  strVec[1] = str2;

  // You can copy after the 1st 4 characters
  std::string str3(str, 4);
  strVec[2] = str3;

  // Repeat a value to make a string
  std::string str4(5, 'x');
  strVec[3] = str4;

  // Combine strings with append or +
  strVec[4] = str.append(" and your not");
  str += " and your not";

  // Append part of a string
  str.append(str, 34, 37);
  strVec[5] = str;

  // Erase characters from a string from an index to another
  // or the last
  str.erase(13, str.length() - 1);
  strVec[6] = str;

  for(auto y: strVec)
    std::cout << y << "\n";

  // find() returns index where pattern is found
  // or npos
  if(str.find("string") != std::string::npos)
    std::cout << "1st not " << str.find("string") << "\n";

  // substr(x, y) returns a substring starting at
  // index x with a length of y
  std::cout << "Substr " << str.substr(6,6) << "\n";

  // Reverse a string by passing the beginning and end
  // of a string
  reverse (str.begin(), str.end());
  std::cout << "Reverse " << str << "\n";

  // Case conversion
  transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
  std::cout << "Upper " << str2 << "\n";
  transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
  std::cout << "Lower " << str2 << "\n";

  // You can get the ascii code for a char by saving
  // the char as an int or with (int)
  // a - z : 97 - 122
  // A - Z : 65 - 90
  char aChar = 'Z';
  int aInt = aChar;
  std::cout << "A Code " << (int)'a' << "\n";

  // Convert int to string
  std::string strNum = std::to_string(1+2);
  std::cout << "String " << strNum << "\n";

  // ----- PROBLEM : SECRET STRING -----
  // Receive an uppercase string and hide its meaning
  // by turning it into ascii codes
  // Translate it back to the original letters

  std::string normalStr, secretStr = "";
  std::cout << "Enter your string in uppercase : ";
  std::cin >> normalStr;

  // Cycle through each character converting
  // them into ascii codes which are stored in
  // a string
  for(char c: normalStr)
    secretStr += std::to_string((int)c);
    // secretStr += std::to_string((int)c - 23);

  std::cout << "Secret : " << secretStr << "\n";

  normalStr = "";

  // Cycle through numbers in string 2 at a time
  for(int i = 0; i < secretStr.length(); i += 2){

    // Get the 2 digit ascii code
    std::string sCharCode = "";
    sCharCode += secretStr[i];
    sCharCode += secretStr[i+1];

    // Convert the string into int
    int nCharCode = std::stoi(sCharCode);

    // Convert the int into a char
    char chCharCode = nCharCode;
    // char chCharCode = nCharCode + 23;

    // Store the char in normalStr
    normalStr += chCharCode;
  }

  std::cout << "Original : " << normalStr << "\n";

  // ----- END OF PROBLEM : SECRET STRING -----

  // ----- BONUS PROBLEM -----
  // Allow the user to enter upper and lowercase
  // letters by subtracting and adding 1 value
  // ----- END OF BONUS PROBLEM -----

  return 0;

}

// ----- END OF STRING TUTORIAL ——

// ----- MATH FUNCTIONS -----
// C++ has numerous math functions
// http://en.cppreference.com/w/cpp/numeric/math

// Needed for math functions
#include <cmath>

int main() {

  std::cout << "abs(-10) = " << std::abs(-10) << "\n";

  std::cout << "max(5,4) = " << std::max(5,4) << "\n";

  std::cout << "min(5,4) = " << std::min(5,4) << "\n";

  std::cout << "fmax(5.3,4.3) = " << std::fmax(5.3,4.3) << "\n";

  std::cout << "fmin(5.3,4.3) = " << std::fmin(5.3,4.3) << "\n";

  // e ^ x
  std::cout << "exp(1) = " << std::exp(1) << "\n";

  // 2 ^ x
  std::cout << "exp2(1) = " << std::exp2(1) << "\n";

  // e * e * e ~= 20 so log(20.079) ~= 3
  std::cout << "log(20.079) = " << std::log(20.079) << "\n";

  // 10 * 10 * 10 = 1000, so log10(1000) = 3
  std::cout << "log10(1000) = " << std::log10(1000) << "\n";

  // 2 * 2 * 2 = 8
  std::cout << "log2(8) = " << std::log2(8) << "\n";

  // 2 ^ 3
  std::cout << "pow(2,3) = " << std::pow(2,3) << "\n";

  // Returns what times itself equals the provided value
  std::cout << "sqrt(100) = " << std::sqrt(100) << "\n";

  // What cubed equals the provided
  std::cout << "cbrt(1000) = " << std::cbrt(1000) << "\n";

  // Hypotenuse : SQRT(A^2 + B^2)
  std::cout << "hypot(2,3) = " << std::hypot(2,3) << "\n";

  std::cout << "ceil(10.45) = " << std::ceil(10.45) << "\n";

  std::cout << "floor(10.45) = " << std::floor(10.45) << "\n";

  std::cout << "round(10.45) = " << std::round(10.45) << "\n";

  // Also sin, cos, tan, asin, acos, atan, atan2,
  // sinh, cosh, tanh, asinh, acosh, atanh

  return 0;
}

// ----- END OF MATH FUNCTIONS -----
