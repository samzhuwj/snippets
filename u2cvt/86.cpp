// calculate primes without threads
#include <iostream>
#include <vector>

void FindPrimes(unsigned int start, unsigned int end, std::vector<unsigned int>& vect)
{
  for(unsigned int x = start; x <= end; x += 2){
    for(unsigned int y = 2; y < x; y++){
      if((x % y) == 0){
        break;
      } else if((y + 1) == x){
        vect.push_back(x);
      }
    }
  }
}

int main()
{
  std::vector<unsigned int> primeVect;
  int startTime = clock();
  FindPrimes(1, 100000, primeVect);

  for(auto i: primeVect){
    std::cout << i << "\n";
  }

  int endTime = clock();
  std::cout << "Execution Time: " << (endTime - startTime)/double(CLOCKS_PER_SEC) << std::endl;

  return 0;
}
