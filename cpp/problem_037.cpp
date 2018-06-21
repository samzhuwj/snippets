#include <array>
#include <cmath>
#include <iostream>

template<std::size_t N>
std::array<bool, N> primesUpto()
{
  std::array<bool, N> primesList;

  std::fill(primesList.begin(), primesList.end(), true);

  primesList[0] = primesList[1] = false;

  std::size_t sqrtLimit = std::sqrt(N) + 1;

  for (std::size_t i = 0; i < sqrtLimit; ++i)
    if (primesList[i])
      for (std::size_t j = i + i; j < N; j += i)
        primesList[j] = false;

  return primesList;
}

template<std::size_t N>
bool isTruncPrime(std::size_t number, const std::array<bool, N>& primesList)
{
  for (std::size_t i = 10; i < number; i *= 10)
    if (!primesList[number % i])
      return false;
  for (; number >= 1; number /= 10)
    if (!primesList[number])
      return false;

  return true;
}

int main()
{
  const auto primesUptoMillion = primesUpto<1000000ULL>();

  std::size_t numberTruncatablePrimes = 0;
  std::size_t currentNumber = 11;
  std::size_t truncatablePrimeSum = 0;

  while (numberTruncatablePrimes != 11)
  {
    if (primesUptoMillion[currentNumber] &&
      isTruncPrime(currentNumber, primesUptoMillion))
    {
      ++numberTruncatablePrimes;
      truncatablePrimeSum += currentNumber;
    }
    currentNumber += 2;
  }
  std::cout << truncatablePrimeSum << "\n";
}
