#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string steveQuote = "A day without sunshine is like, you know, night";
	ofstream writer("stevequote.txt");

	if(! writer){
		cout << "Error opening file" << endl;
		return -1;
	}
  else {
		writer << steveQuote << endl;
		writer.close();
	}

  return 0;
}
