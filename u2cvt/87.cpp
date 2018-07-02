// calculate primes with threads
#include <iostream>
#include <vector>
#include <thread>

std::mutex vectLock;
std::vector<unsigned int> primeVect;

void FindPrimes(unsigned int start, unsigned int end)
{
  for(unsigned int x = start; x <= end; x += 2){
    for(unsigned int y = 2; y < x; y++){
      if((x % y) == 0){
        break;
      } else if((y + 1) == x){
        vectLock.lock();
        primeVect.push_back(x);
        vectLock.unlock();
      }
    }
  }
}

void FindPrimesWithThreads(unsigned int start, unsigned int end, unsigned int numThreads)
{
  std::vector<std::thread> threadVect;
  unsigned int threadSpread = end / numThreads;
  unsigned int newEnd = start + threadSpread - 1;

  for(unsigned int x = 0; x < numThreads; x++){
    threadVect.emplace_back(FindPrimes, start, newEnd);
    start += threadSpread;
    newEnd += threadSpread;
  }

  for(auto& t : threadVect){
    t.join();
  }
}

int main()
{
  int startTime = clock();
  FindPrimesWithThreads(1, 100000, 3);
  int endTime = clock();

  for(auto i: primeVect)
    std::cout << i << "\n";

  std::cout << "Execution Time : " << (endTime - startTime)/double(CLOCKS_PER_SEC) << std::endl;

  return 0;
}
