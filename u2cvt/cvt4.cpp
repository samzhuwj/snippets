#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int start, int max, int step);

int main() {

// ----- WHILE / BREAK / CONTINUE -----
// While loops continue to run the code in them
// as long as a condition is true

// Create the variable used in the while condition
// before the while loop
int i = 1;

while (i <= 20){

  // If a value is even don't print it
  if((i % 2) == 0){
    i += 1;

    // Continue skips the rest of the code
    // and jumps back to the beginning
    // of the loop
    continue;
  }

  // Break stops execution of the loop and jumps
  // to the line after the loops closing }
  if(i == 15) break;

  std::cout << i << "\n";

  // Increment i so the loop eventually ends
  i += 1;

}
// ----- END WHILE / BREAK / CONTINUE -----

// ----- PROBLEM DRAW A PINE TREE -----
// For this problem I want you to draw a pine
// tree after asking the user for the number
// of rows. Here is the sample program

/*
 How tall is the tree : 5
    #
   ###
  #####
 #######
#########
    #
 */

/*
I know that this is the number of spaces
and hashes for the tree
4 - 1
3 - 3
2 - 5
1 - 7
0 - 9
Spaces before stump = Spaces before top

So I need to
1. Decrement spaces by one each time through
the loop
2. Increment the hashes by 2 each time through
the loop
3. Save spaces to the stump by calculating
tree height - 1
4. Decrement from tree height until it equals 0
5. Print spaces and then hashes for each row
6. Print stump spaces and then 1 hash
*/

std::cout << "How tall is the tree : ";

// The top of the tree starts with 1 hash
int treeHeight = 0, spaces = 0, hashes = 1,
        stumpSpaces = 0;

std::cin >> treeHeight;

// Starting spaces = treeHeight - 1
spaces = treeHeight - 1;

// Spaces before stump = tree height - 1
stumpSpaces = treeHeight - 1;

// while there are more rows to print keep going
while(treeHeight != 0){

  // Print spaces before hashes
  for(auto x: Range(1, spaces, 1))
    std::cout << " ";

  // Print the hashes
  for(auto x: Range(1, hashes, 1))
    std::cout << "#";

  // Newline after each row
  std::cout << "\n";

  // Spaces decremented by 1 each time
  spaces -= 1;

  // Hashes incremented by 2 each time
  hashes += 2;

  // Decrement treeHeight so loop ends
  treeHeight -= 1;

}

// Print spaces befor stump
for(auto x: Range(1, stumpSpaces, 1))

std::cout << " ";

// Print stump
std::cout << "#";

  return 0;
}

std::vector<int> Range(int start, int max, int step){

  // Every while statement needs an index
  // to start with
  int i = start;

  // Will hold returning vector
  std::vector<int> range;

  // Make sure we don't go past max value
  while(i <= max){

    // Add value to the vector
    range.push_back(i);

    // Increment the required amount
    i += step;
  }

  return range;

}

// ----- END PROBLEM DRAW A PINE TREE -----

// ----- EXCEPTION HANDLING EX 1 -----
  // Exceptions are errors that occur when things don't
  // go as expected.
  // 1. You expect and int and get a string
  // 2. You expect a file to be available and it isn't
  // 3. You expect the user to not enter 0 and they do

  // You try to execute code that could be troublesome
  // and if an error occurs you catch it and throw
  // it to another block of code for handling

  double num1 = 0, num2 = 0;

  std::cout << "Enter number 1 : ";
  std::cin >> num1;
  std::cout << "Enter number 2 : ";
  std::cin >> num2;

  try{
    if(num2 == 0){
      throw "Division by zero is not possible";
    } else {

      printf("%.1f / %.1f = %.2f", num1, num2,
      (num1 / num2));
    }
  }

  catch(const char* exp){
    std::cout << "Error : " << exp << "\n";
  }


// ----- END OF EXCEPTION HANDLING EX 1 -----

// ----- EXCEPTION HANDLING EX 2 -----
  try {
    std::cout << "Throwing exception\n";

    // Another way to throw an exception
    throw std::runtime_error("Error Occurred");

    // This point is never reached
    std::cout << "Can you print me?\n";
  }

  // All exceptions are based on std::exception
  catch(std::exception &exp){

    // what() Prints an explanatory string
    std::cout << "Handled Exception : " << exp.what() << "\n";
  }

  // If exceptions aren't caught any place else
  // this will catch it
  catch(...){
    std::cout << "Default exception catch\n";
  }


// ----- END OF EXCEPTION HANDLING EX 2 -----

// ----- DO WHILE LOOPS -----

	// Needed for the time function
	#include <ctime>

  // Do while loops are guaranteed to execute at least once
  // We'll create a secret number guessing game

  // Generate random number from 0 - 10

  // We need to seed the random number generator
  // time() returns the number of seconds since 1, 1, 1970
  srand(time(NULL));

  // If you divide any number it is impossible to get a
  // remainder >= 11
  int secretNum = std::rand() % 11;
  int guess = 0;

  do{

    std::cout << "Guess the number : ";
    std::cin >> guess;

    if(guess > secretNum) std::cout << "To Big\n";
    if(guess < secretNum) std::cout << "To Small\n";

  } while(secretNum != guess);

  std::cout << "You guessed it\n";


  // ----- END OF DO WHILE LOOPS -----

  // ----- PROBLEM CREATE A DO WHILE LOOP WITH WHILE -----
  secretNum = std::rand() % 11;
  while(true){
    std::cout << "Guess the number : ";
    std::cin >> guess;

    if(guess > secretNum) std::cout << "To Big\n";
    if(guess < secretNum) std::cout << "To Small\n";

    if(guess == secretNum) break;
  }

  std::cout << "You guessed it\n";

// ----- END PROBLEM CREATE A DO WHILE LOOP WITH WHILE -----

// ---------- End of C++ Tutorial 4  ----------
