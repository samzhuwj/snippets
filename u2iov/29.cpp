#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> lotteryNumVect(10);

	int lotteryNumArray[5] = {4, 13, 14, 24, 34};
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
  lotteryNumVect.insert(lotteryNumVect.begin()+5, 17);
	cout << "Value in 5 " << lotteryNumVect.at(5) << endl;

  return 0;
}
