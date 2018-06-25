#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

// Function Prototypes
std::vector<std::string> StringToVector(std::string, char separator);

std::string VectorToString(std::vector<std::string>& vec, char separator);

std::string TrimWhitespace(std::string);

std::vector<int> FindSubstringMatches(std::string theString, std::string substring);

std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString);

int main() {

  // ----- 1. CONVERT STRING TO VECTOR -----
  // Create a function that receives a string and separator
  // and returns a string vector
  std::string sSentence = "This is a random string";

  // Create a vector
  std::vector<std::string> vec = StringToVector(sSentence, ' ');

  // Cycle through each index in the vector and print
  // out each word
  for(int i = 0; i < vec.size(); ++i){
    std::cout << vec[i] << "\n";
  }
  // ----- END PROBLEM CONVERT STRING TO VECTOR -----

  // ----- 2. PROBLEM CONVERT VECTOR TO STRING -----
  std::vector<std::string> vCusts(3);
  vCusts[0] = "Bob";
  vCusts[1] = "Sue";
  vCusts[2] = "Tom";

  std::string sCusts = VectorToString(vCusts, ' ');
  std::cout << sCusts << "\n";

  // ----- END PROBLEM CONVERT VECTOR TO STRING -----

  // ----- 3. STRIP WHITESPACE -----
  std::string aStr = "   Just some random words   ";

  aStr = TrimWhitespace(aStr);

  std::cout << "*" << aStr << "*\n";

  // ----- END STRIP WHITESPACE -----

  // ----- 4. PROBLEM FIND ALL INDEX MATCHES RETURN VECTOR -----
  std::string phrase = "To be or not to be";

  std::vector<int> matches = FindSubstringMatches(phrase, "be");

  for(int i = 0; i < matches.size(); ++i){
    std::cout << matches[i] << "\n";
  }
  // ----- END PROBLEM FIND ALL INDEX MATCHES RETURN VECTOR -----

  // ----- 5. PROBLEM REPLACE ALL SUBSTRINGS -----
  std::cout << ReplaceAllSubstrings("to know or not to know", "know", "be") << "\n";

  // ----- END PROBLEM REPLACE ALL SUBSTRINGS -----

  // ----- 6. CHARACTER FUNCTIONS -----
  char letterZ = 'z';
  char num3 = '3';
  char aSpace = ' ';

  std::cout << "Is z a letter or number " << isalnum(letterZ) << "\n";
  std::cout << "Is z a letter " << isalpha(letterZ) << "\n";
  std::cout << "Is z uppercase " << isupper(letterZ) << "\n";
  std::cout << "Is z lowercase " << islower(letterZ) << "\n";
  std::cout << "Is 3 a number " << isdigit(num3) << "\n";
  std::cout << "Is space a space " << isspace(aSpace) << "\n";

  // ----- END CHARACTER FUNCTIONS -----

  return 0;

}

// ----- 1. CONVERT STRING TO VECTOR -----
std::vector<std::string> StringToVector(std::string, char separator){
  std::string sSentence = "This is a random string";

  // Create a vector
  std::vector<std::string> vecsWords;

  // A stringstream object receives strings separated
  // by a space and then spits them out 1 by 1
  std::stringstream ss(sSentence);

  // Will temporarily hold each word in the string
  std::string sIndivStr;

  // While there are more words to extract keep
  // executing
  // getline takes strings from a stream of words stored
  // in the stream and each time it finds a blanks space
  // it stores the word proceeding the space in sIndivStr
  while(getline(ss, sIndivStr, separator)){

    // Put the string into a vector
    vecsWords.push_back(sIndivStr);
  }

  return vecsWords;
}
// ----- END CONVERT STRING TO VECTOR -----

// ----- 2. PROBLEM CONVERT VECTOR TO STRING -----
std::string VectorToString(std::vector<std::string>& vec, char separator){

  std::string theString = "";
  for(auto cust: vec)
    theString += cust + separator;

  return theString;

}
// ----- END PROBLEM CONVERT VECTOR TO STRING -----

// ----- 3. STRIP WHITESPACE -----
std::string TrimWhitespace(std::string theString){
  // find_last_not_of finds the last character
  // that doesn't match a list of defined characters
  std::string whitespaces(" \t\f\n\r");
  theString.erase(theString.find_last_not_of(whitespaces) + 1);

  // find_first_not_of does the same for the front of the string
  theString.erase(0, theString.find_first_not_of(whitespaces));

  return theString;
}
// ----- END STRIP WHITESPACE -----

// ----- 4. PROBLEM FIND ALL INDEX MATCHES RETURN VECTOR -----
std::vector<int> FindSubstringMatches(std::string theString, std::string substring){
  std::vector<int> matchingIndexes;

  // Check for matching substring
  int index = theString.find(substring, 0);

  // Keep adding indexes until none are left
  while(index != std::string::npos){
    matchingIndexes.push_back(index);
    index = theString.find(substring, index + 1);
  }

  return matchingIndexes;
}

// ----- END PROBLEM FIND ALL INDEX MATCHES RETURN VECTOR -----

// ----- 5. PROBLEM REPLACE ALL SUBSTRINGS -----
std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString){

  // Get a vector that contains all matching indexes
  std::vector<int> matches = FindSubstringMatches(theString, substring);

  if(matches.size() != 0){
    // Get size difference between substring and newString
    int lengthDifference = newString.size() - substring.size();

    // Times through loop
    int timesLooped = 0;

    for(auto index: matches){
      theString.replace(index + (timesLooped * lengthDifference), substring.size(), newString);
      timesLooped++;
    }
  }

  return theString;

}
// ----- END PROBLEM REPLACE ALL SUBSTRINGS -----
