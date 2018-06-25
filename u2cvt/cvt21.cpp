#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <ctime>

#include <regex>

void PrintMatches(std::string str, std::regex reg){

  // Used when your searching a string
  std::smatch matches;

  // Determines if there is a match and match
  // results are returned in matches
  while(std::regex_search(str, matches, reg)){

    // Get the first match
    std::cout << matches.str(1) << "\n";

    // Eliminate the previous match and create
    // a new string to search
    str = matches.suffix().str();
  }
  std::cout << "\n";
}

// [ ]   : Match what is in the brackets
// [^ ]  : Match anything not in the brackets
// ( )   : Return surrounded submatch
// .     : Match any 1 character or space
// +     : Match 1 or more of what proceeds
// ?     : Match 0 or 1
// *     : Match 0 or More
// *?    : Lazy match the smallest match
// \b    : Word boundary
// ^     : Beginning of String
// $     : End of String
// \n    : Newline
// \d    : Any 1 number
// \D    : Anything but a number
// \w    : Same as [a-zA-Z0-9_]
// \W    : Same as [^a-zA-Z0-9_]
// \s    : Same as [\f\n\r\t\v]
// \S    : Same as [^\f\n\r\t\v]
// {5}   : Match 5 of what proceeds the curly brackets
// {5,7} : Match values that are between 5 and 7 in length

int main()
{
  // ---------- Back References ----------
  // A back reference allows you to to reuse the expression
  // that proceeds it

  // Grab a double word
  std::string str1 = "The cat cat fell out the window";

  // Match word boundary, 1 or more characters, space
  // and the same word that proceeded it
  // \\1 is used to refer to the 1st match surrounded
  // by ()
  std::regex reg1 ("(\\b\\w+)\\s+\\1");

  PrintMatches(str1,reg1);

  // ---------- Back Reference Substitutions ----------

  // Replace the bold tags in the link with no tags
  std::string str2 = "<a href='#'><b>The Link</b></a>";

  // Regex matches bold tags and grabs the text between
  // them to be used by the back reference
  std::regex reg2 ("<b>(.*?)</b>");

  // Holds the new string
  std::string result;

  // regex_replace makes a copy of the original
  // along with the replaced parts
  // back_inserter inserts the final results
  // into result
  // $1 references the subexpression surrounded
  // with () ex. (.*?)

  std::regex_replace(std::back_inserter(result),
          str2.begin(), str2.end(), reg2, "$1");
  std::cout << result << "\n";

  // ---------- Another Back Reference Substitution ----------
  // Here I want to surround all phone number
  // area codes with ()

  std::string str3 = "412-555-1212";

  // I create 2 subexpressions
  std::regex reg3 ("([\\d]{3})-([\\d]{3}-[\\d]{4})");

  // Holds the new string
  std::string res3;

  // The output is the area code surrounded with ()
  // and then the 2nd subexpression
  std::regex_replace(std::back_inserter(res3),
          str3.begin(), str3.end(), reg3, "($1)$2");
  std::cout << res3 << "\n";

  // ---------- PROBLEM ----------
  // Receive a string like this

  std::string str4 = "https://www.youtube.com " "http://www.google.com";

  // Grab the URL and then provide the following output
  // using a back reference substitution
  // <a href='https://www.youtube.com'>www.youtube.com</a>
  // <a href='https://www.google.com'>www.google.com</a>

  // Grab the whole URL and the web page name
  std::regex reg4 ("(https?://([\\w.]+))");

  // Holds the new string
  std::string res4;

  std::regex_replace(std::back_inserter(res4), str4.begin(), str4.end(), reg4, "<a href='$1'>$2</a>\n");
  std::cout << res4 << "\n";

  // ---------- Look Ahead ----------
  // A look ahead defines a pattern to match but not
  // return
  // You define the expression to look for but not
  // return
  // like this (?=expression)

  std::string str5 = " one two three four ";

  // I don't want to return the word boundaries
  std::regex reg5 ("(\\w+(?=\\b))");

  PrintMatches(str5,reg5);

  // ---------- OR Conditional ----------
  // You can use | to define the matches you'll except

  std::string str6 = "1. Dog 2. Cat 3. Turtle";

  std::regex reg6 ("\\d\\.\\s(Dog|Cat)");

  PrintMatches(str6,reg6);

  // ---------- PROBLEM ----------
  // Create a regex that will match for 5 digit zip
  // codes or zip codes with 5 digits a dash and
  // then 4 digits

  std::string str7 = "12345 12345-1234 1234 12346-333";

  std::regex reg7 ("(\\d{5}-\\d{4}|\\d{5}\\s)");

  PrintMatches(str7,reg7);

  // ---------- PROBLEM ----------
  // Find all of the following phone numbers
  // and then print them

  std::string str8 = "14125551212 4125551212 "
          "(412)5551212 412 555 1212 412-555-1212 "
          "1-412-555-1212";

  std::regex reg8 ("((1?)(-| ?)(\\()?(\\d{3})(\\)|-| |\\)-|\\) )?(\\d{3})(-| )?(\\d{4}|\\d{4}))");

  PrintMatches(str8,reg8);

  return 0;
}
