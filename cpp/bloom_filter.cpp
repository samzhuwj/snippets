// A space-efficient probabilistic data structure that is used to test whether
// an element is a member of a set. False positive matches are possible, but
// false negatives are not; i.e. a query returns either "possibly in set" or
// "definitely not in set". Elements can be added to the set, but not removed.
#include <iostream>
using namespace std;

class BloomFilter
{
public:
  BloomFilter(int size)
  {
    size_ = size;
    bits_ = new char[size_ / 8 + 1];
  }

  ~BloomFilter()
  {
    delete [] bits_;
  }

  void Add(int value)
  {
    int hash = value % size_;
    bits_[hash / 8] |= 1 << (hash % 8);
  }

  bool Contains(int value)
  {
    int hash = value % size_;
    return (bits_[hash / 8] & (1 << (hash % 8))) != 0;
  }

private:
  char* bits_;
  int size_;
};

int main()
{
  BloomFilter bloomFilter(1000);
  bloomFilter.Add(1);
  bloomFilter.Add(2);
  bloomFilter.Add(1001);
  bloomFilter.Add(1004);

  if (bloomFilter.Contains(1))
    cout << "Bloom Filter contains 1" << endl;

  if (bloomFilter.Contains(2))
    cout << "Bloom Filter contains 2" << endl;

  if (!bloomFilter.Contains(3))
    cout << "Bloom Filter not contains 3" << endl;

  if (bloomFilter.Contains(4))
    cout << "Bloom Filter not contains 4, but returns false positive" << endl;
}
