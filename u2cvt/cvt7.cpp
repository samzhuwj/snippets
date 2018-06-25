std::string CaesarCipher(std::string theString, int key, bool encrypt);

int main() {

  std::string theString = "Make me secret";

  std::string encryptedStr = CaesarCipher(theString, 5, true);

  std::string decryptedString = CaesarCipher(encryptedStr, 5, false);

  std::cout << "Encrypted " << encryptedStr << "\n";

  std::cout << "Decrypted " << decryptedString << "\n";

  return 0;

}

std::string CaesarCipher(std::string theString, int key, bool encrypt){
  std::string returnString = "";
  int charCode = 0;
  char letter;

  // The key will shift and unshift character codes
  if(encrypt) key = key * -1;

  // Cycle through each character
  for(char& c : theString) {

    // Check if it's a letter and if not don't chage it
    if(isalpha(c)){

      // Convert from char to int and shift the char code
      charCode = (int)c;
      charCode += key;

      // If uppercase check if the new character code >
      // char code for Z, or < char code for A
      // If so shift the character code so that its value
      // wraps back into the letter character codes
      if(isupper(c)){

        if(charCode > (int)'Z'){
          charCode -= 26;
        } else if(charCode < (int)'A'){
          charCode += 26;
        }

      } else {

        // Do the same for lowercase letters
        if(charCode > (int)'z'){
            charCode -= 26;
        } else if(charCode < (int)'a'){
            charCode += 26;
        }
      }

      // Convert from int to char and add the returning string
      letter = charCode;
      returnString += letter;

    } else {
      letter = c;
      returnString += c;
      std::cout << c << "\n";
    }
  }

  return returnString;
}

// ----- END PROBLEM CAESAR CIPHER -----

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

// ----- 1. PROBLEM : SOLVE FOR X -----

std::vector<std::string> StringToVector(std::string theString, char separator);

void SolveForX(std::string equation);

int main() {
  // Make a function that receives an algebraic
  // equation like x + 4 = 9 and solve for x
  // x will always be the 1st value received
  // and you only will deal with addition
  std::cout << "Enter an equation to solve ";
  std::string equation = "";
  getline(std::cin, equation);
  SolveForX(equation);

  return 0;
}

std::vector<std::string> StringToVector(std::string theString, char separator){

  std::vector<std::string> vecsWords;
  std::stringstream ss(theString);
  std::string sIndivStr;
  while(getline(ss, sIndivStr, separator)){
    vecsWords.push_back(sIndivStr);
  }
  return vecsWords;
}

void SolveForX(std::string equation){
  std::vector<std::string> vecEquation = StringToVector(equation, ' ');

  // Convert strings to int
  int num1 = std::stoi(vecEquation[2]);
  int num2 = std::stoi(vecEquation[4]);
  int xVal = num2 - num1;

  std::cout << "x = " << xVal << "\n";
}
// ----- 1. END PROBLEM : SOLVE FOR X -----

// ----- 2. PROBLEM : RETURN A LIST OF PRIMES -----

std::vector<int> Range(int start, int max, int step);

bool IsPrime(int num);

std::vector<int> GetPrimes(int maxNum);

int main() {
  int num = 0;
  std::cout << "Number to Check : ";
  std::cin >> num;

  // Shows bool values as true or false
  std::cout.setf(std::ios::boolalpha);
  std::cout << "Is " << num << " Prime " << IsPrime(num) << "\n";

  std::cout << "Generate Primes up to ";
  int maxPrime;
  std::cin >> maxPrime;

  std::vector<int> primeList = GetPrimes(maxPrime);
  for(auto x: primeList)
    std::cout << x << "\n";

  return 0;
}

std::vector<int> Range(int start, int max, int step){

  int i = start;
  std::vector<int> range;
  while(i <= max){
    range.push_back(i);
    i += step;
  }
  return range;
}

bool IsPrime(int num){
  for(auto n: Range(2, num - 1, 1)){
    if((num % n) == 0)
      return false;
  }
  return true;
}

std::vector<int> GetPrimes(int maxNum){

  std::vector<int> vecPrimes;

  for(auto x: Range(2, maxNum, 1)){
    if(IsPrime(x))
      vecPrimes.push_back(x);
  }

  return vecPrimes;
}

// ----- 2. END PROBLEM : RETURN A LIST OF PRIMES -----

// ----- 3. PROBLEM : GENERATE A RANDOM VECTOR OF NUMBERS -----

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

// Needed for random number generation
#include <ctime>

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);

int main()
{
  std::vector<int> vecVals = GenerateRandVec(10, 5, 50);
  for(auto x: vecVals)
    std::cout << x << "\n";

  return 0;
}

std::vector<int> GenerateRandVec(int numOfNums, int min, int max){
  std::vector<int> vecValues;

  // Seed the random number generator
  srand(time(NULL));

  int i = 0, randVal = 0;

  while(i < numOfNums){
    // The min added on increases result based on min
    // The remainder of modulus can't be greater
    // then the divisor. We have to adjust down
    // based on the addition from min
    randVal = min + std::rand() % ((max + 1) - min);
    vecValues.push_back(randVal);
    i++;
  }
  return vecValues;
}
