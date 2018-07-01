// use template function
#include <iostream>

template <typename T> void Times2(T val)
{
  std::cout << val << " * 2 = " << val * 2 << "\n";
}

template <typename T> T Add(T val, T val2)
{
  return val + val2;
}

template <typename T> T Max(T val, T val2)
{
  return (val < val2) ? val2 : val;
}

int main()
{
  Times2(5);
  Times2(5.3);
  std::cout << "5 + 4 = " << Add(5,4) << "\n";
  std::cout << "5.5 + 4.6 = " << Add(5.5,4.6) << "\n";
  std::cout << "Max 4 or 8 = " << Max(4, 8) << "\n";
  std::cout << "Max A or B = " << Max('A', 'B') << "\n";
  std::cout << "Max Dog or Cat = " << Max("Dog", "Cat") << "\n";

  return 0;
}
