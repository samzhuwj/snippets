// deque
#include <iostream>
#include <deque>

int main()
{
  std::deque<int> deq1;
  deq1.push_back(5);
  deq1.push_front(1);
  deq1.assign({11,12});
  std::cout <<"Size : " << deq1.size() << "\n";
  std::cout << deq1[0] << "\n";
  std::cout << deq1.at(1) << "\n";
  std::deque<int>::iterator it = deq1.begin() + 1;

  for(int i : deq1){
    std::cout << i << "\n";
  }

  deq1.insert(it, 3);

  for(int i : deq1){
    std::cout << i << "\n";
  }

  int tempArr[5] = {6,7,8,9,10};
  deq1.insert(deq1.end(), tempArr, tempArr+5);

  for(int i : deq1){
    std::cout << i << "\n";
  }

  deq1.erase(deq1.end());

  for(int i : deq1){
    std::cout << i << "\n";
  }

  deq1.erase(deq1.begin(), deq1.begin()+2);

  for(int i : deq1){
    std::cout << i << "\n";
  }

  deq1.pop_front();

  for(int i : deq1){
    std::cout << i << "\n";
  }

  deq1.pop_back();

  for(int i : deq1){
    std::cout << i << "\n";
  }

  std::deque<int> deq2(2,50);
  deq1.swap(deq2);

  for(int i : deq1){
    std::cout << i << "\n";
  }

  deq1.clear();

  for(int i : deq1){
    std::cout << i << "\n";
  }

  return 0;
}
