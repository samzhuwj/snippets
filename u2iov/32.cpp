#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> lotteryNumVect(10);

	int lotteryNumArray[5] = {4, 13, 14, 24, 34};
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
  lotteryNumVect.push_back(99);
  cout << "First Element " << lotteryNumVect.front() << endl;
  cout << "Last Element " << lotteryNumVect.back() << endl;
  cout << "Vector Empty " << lotteryNumVect.empty() << endl;
  cout << "Number of Vector Elements " << lotteryNumVect.size() << endl;

  return 0;
}
