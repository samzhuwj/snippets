#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

int main()
{
  int A[] = { 1, 2, 3, 4, 5, 6 };
  shuffle(A, A + 6, default_random_engine(time(NULL)));
  for (auto a : A)
    cout << a << " " <<endl;
  return 0;
}
