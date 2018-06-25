#include <iostream>

int g_iRandNum = 0;
const double PI = 3.14159;

int main(int argc, char* argv[])
{
  bool bMarried = true;
  char chMyGrade = 'A';
  unsigned short int u16Age = 17;
  short int siWeight = 120;
  int dDays = 7;
  long lBigNum = 1000000;
  float fPi = 3.14159;
  float fBigFloat = 1.1111111111;
  float fBigFloat2 = 1.1111111111;
  float fFloatSum = fBigFloat + fBigFloat2;
  double dbBigFloat = 1.11111111111111111;
  long double ldPi = 3.14159;
  auto whatWillIBe = true;

  std::cout << "Min bool " << std::numeric_limits<bool>::min() << "\n";
  std::cout << "Max bool " << std::numeric_limits<bool>::max() << "\n";
  std::cout << "Min char " << std::numeric_limits<char>::min() << "\n";
  std::cout << "Max char " << std::numeric_limits<char>::max() << "\n";
  std::cout << "Min short int " << std::numeric_limits<short int>::min() << "\n";
  std::cout << "Max short int " << std::numeric_limits<short int>::max() << "\n";
  std::cout << "Min unsigned short int " << std::numeric_limits<unsigned short int>::min() << "\n";
  std::cout << "Max unsigned short int " << std::numeric_limits<unsigned short int>::max() << "\n";
  std::cout << "Min int " << std::numeric_limits<int>::min() << "\n";
  std::cout << "Max int " << std::numeric_limits<int>::max() << "\n";
  std::cout << "Min long " << std::numeric_limits<long>::min() << "\n";
  std::cout << "Max long " << std::numeric_limits<long>::max() << "\n";
  std::cout << "Min float " << std::numeric_limits<float>::min() << "\n";
  std::cout << "Max float " << std::numeric_limits<float>::max() << "\n";
  std::cout << "Min double " << std::numeric_limits<double>::min() << "\n";
  std::cout << "Max double " << std::numeric_limits<double>::max() << "\n";
  std::cout << "Min long double " << std::numeric_limits<long double>::min() << "\n";
  std::cout << "Max long double " << std::numeric_limits<long double>::max() << "\n";

  std::cout << "bool Size " << sizeof(bool) << "\n";
  std::cout << "char Size " << sizeof(char) << "\n";
  std::cout << "short int Size " << sizeof(short int) << "\n";
  std::cout << "unsigned short Size " << sizeof(unsigned short) << "\n";
  std::cout << "int Size " << sizeof(int) << "\n";
  std::cout << "long Size " << sizeof(long) << "\n";
  std::cout << "float Size " << sizeof(float) << "\n";
  std::cout << "double Size " << sizeof(double) << "\n";
  std::cout << "long double Size " << sizeof(long double) << "\n";

  printf("fFloatSum Precision : %.15f\n", fFloatSum);
  printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

  return 0;
}
