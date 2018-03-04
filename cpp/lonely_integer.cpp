// Given an array in which all the no. are present twice except one, find that lonely integer.
#include <iostream>
using namespace std;

int LonelyInteger(int *a, int n)
{
  int lonely = 0;
  for (int i = 0; i < n; i++)
    lonely ^= a[i];
  return lonely;
}

int main()
{
  int a[] = {2, 3, 4, 5, 3, 2, 5};
  cout << LonelyInteger(a, sizeof(a) / sizeof(a[0])) << endl;
  return 0;
}
