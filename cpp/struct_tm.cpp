#include <iostream>
#include <ctime>

using namespace std;

int main() {
  time_t now = time(nullptr);

  cout << "Number of sec since January 1,1970:" << now << endl;

  tm *ltm = localtime(&now);

  cout << "Year: " << 1900 + ltm->tm_year << endl;
  cout << "Month: "<< 1 + ltm->tm_mon << endl;
  cout << "Day: "<<  ltm->tm_mday << endl;
  cout << "Time: "<< 1 + ltm->tm_hour << ":";
  cout << 1 + ltm->tm_min << ":";
  cout << 1 + ltm->tm_sec << endl;
}
