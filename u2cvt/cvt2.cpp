// ----- CONDITIONAL OPERATORS -----
    // Conditional operators help you to perform
    // different actions depending on conditions
    // ==, !=, <, >, <=, >=

    // ----- LOGICAL OPERATORS -----
    // Logical operators allow you to combine conditions
    // && : If both are true it returns true
    // || : If either are true it returns true
    // ! : Converts true into false and vice versa

    // ----- EXAMPLE : IS A BIRTHDAY IMPORTANT -----
    // 1 - 18, 21, 50, > 65 : Important
    // All others are not important

    std::string sAge = "0";
    std::cout << "Enter your age : ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);

    // if and else is used to execute different code
    // depending on conditions
    if ((nAge >= 1) && (nAge <= 18)){
        std::cout << "Important Birthday\n";
    } else if ((nAge == 21) || (nAge == 50)) {
        std::cout << "Important Birthday\n";
    } else if (nAge >= 65){
        std::cout << "Important Birthday\n";
    } else {
        std::cout << "Not an Important Birthday\n";
    }
    // ----- END EXAMPLE : IS A BIRTHDAY IMPORTANT ——

// ----- PROBLEM : DETERMINE SCHOOL GRADE -----
    // If age 5 "Go to Kindergarten"
    // Ages 6 through 17 go to grades 1 through 12
    // If age > 17 "Go to college"
    // Enter age : 2
    // Too young for school
    // Enter age : 8
    // Go to grade 3
    // Try to do with 15 or less lines of code

    std::string sAge = "0";
    int nGrade = 0;
    std::cout << "Enter age : ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);

    if (nAge < 5)
        std::cout << "To young for school\n";
    else if (nAge == 5)
        std::cout << "Go to Kindergarten\n";
    else if ((nAge > 5) && (nAge <= 17)){
        nGrade = nAge - 5;
        std::cout << "Go to grade " << nGrade << "\n";
    } else
        std::cout << "Go to college\n";

    // ----- END PROBLEM : DETERMINE SCHOOL GRADE -----

// ---------- C++ Tutorial Example 4 —————

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {

    // An array is a collection of data of the same type
    // Declare an array of ints with the value of 1
    // Once the size is defined it can't change
    int arrnNums[10] = {1};

    // Leave out the array length
    int arrnNums2[] = {1,2,3};

    // Create an array and assign some values
    int arrnNums3[5] = {8, 9};

    // Access array values using indexes starting with 0
    std::cout << "1st Value : " << arrnNums3[0] << "\n";

    // Change a value
    arrnNums3[0] = 7;
    std::cout << "1st Value : " << arrnNums3[0] << "\n";

    // Get array size by getting the number of bytes
    // set aside for the array and then divide by the size
    // of the 1st element
    std::cout << "Array size : " <<
            sizeof(arrnNums3) / sizeof(*arrnNums3) << "\n";

    // A multidimensional array is like a spreadsheet
    // If you think of each as layers that contain columns
    // 1st Number : Which layer
    // 2nd Number : Which column
    // 3rd Number : Which row
    int arrnNums4[2][2][2] = {{{1,2}, {3,4}},
    {{5,6}, {7,8}}};
    std::cout << arrnNums4[1][1][1] << "\n";

    // Use vectors when you don't know how big your
    // arrays may be

    // Create a vector with 2 spaces to start
    std::vector<int> vecnRandNums (2);

    // Add values
    vecnRandNums[0] = 10;
    vecnRandNums[1] = 20;

    // Add another value to the vector
    vecnRandNums.push_back(30);

    // Get size of vector
    std::cout << "Vector Size : " << vecnRandNums.size() << "\n";

    // Get last value
    std::cout << "Last Index : " <<
            vecnRandNums[vecnRandNums.size() - 1] << "\n";

    // Convert a string into an array
    std::string sSentence = "This is a random string";

    // Create a vector
    std::vector<std::string> vecsWords;

    // A stringstream object receives strings separated
    // by a space and then spits them out 1 by 1
    std::stringstream ss(sSentence);

    // Will temporarily hold each word in the string
    std::string sIndivStr;

    // Defines what separates the words
    char cSpace = ' ';

    // While there are more words to extract keep
    // executing
    // getline takes strings from a stream of words stored
    // in the stream and each time it finds a blanks space
    // it stores the word proceeding the space in sIndivStr
    while(getline(ss, sIndivStr, cSpace)){

        // Put the string into a vector
        vecsWords.push_back(sIndivStr);
    }

    // Cycle through each index in the vector and print
    // out each word
    for(int i = 0; i < vecsWords.size(); ++i){
        std::cout << vecsWords[i] << "\n";
    }

    return 0;
}


#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {

    // ----- PROBLEM CALCULATOR -----
    // Enter calculation (ex. 5 + 6) : 10 - 6
    // 10.0 - 6.0 = 4.0

    double dbNum1 = 0, dbNum2 = 0;
    std::string sCalc = "";
    std::vector<std::string> vecsCalc;

    std::cout << "Enter calculation (ex. 5 + 6): ";
    getline(std::cin, sCalc);

    std::stringstream ss(sCalc);
    std::string sIndivStr;
    char cSpace = ' ';

    while(getline(ss, sIndivStr, cSpace)){
        vecsCalc.push_back(sIndivStr);
    }

    dbNum1 = std::stoi(vecsCalc[0]);
    dbNum2 = std::stoi(vecsCalc[2]);
    std::string operation = vecsCalc[1];

    if (operation == "+"){
        printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 + dbNum2));
    } else if (operation == "-"){
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 - dbNum2));
    } else if (operation == "*"){
        printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 * dbNum2));
    } else if (operation == "/"){
        printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 / dbNum2));
    } else {
        std::cout << "Please enter only +, -, *, or /\n";
    }

    // ----- END PROBLEM CALCULATOR -----
    return 0;
}
