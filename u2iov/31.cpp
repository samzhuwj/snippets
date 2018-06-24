#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> lotteryNumVect(10);

	int lotteryNumArray[5] = {4, 13, 14, 24, 34};
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
  lotteryNumVect.push_back(99);
  lotteryNumVect.pop_back();
  cout << "Final Value " << lotteryNumVect.back() << endl;

  return 0;
}
