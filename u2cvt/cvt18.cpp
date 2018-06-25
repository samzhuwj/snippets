// ----- ASSOCIATIVE CONTAINERS -----
// Associative containers store sorted data
// which makes insertion slower, but searching
// faster

int main()
{
  // ----- SET -----
  // Sets store unique sorted values using a key
  std::set<int> set1 {5,4,3,2,1,1};
  std::cout << "Size : " << set1.size() << "\n";

  // Insert value
  set1.insert(0);

  // Subscript operator doesn't work
  // std::cout << set1[0] << "\n";

  // Get values with an iterator
  std::set<int>::iterator it = set1.begin();
  it++;

  std::cout << "2nd : " << *it << "\n";

  // Erase value
  set1.erase(5);

  // Erase last 2
  it = set1.end();
  std::advance(it, -2);
  set1.erase(it, set1.end());

  // Add multiple values
  int arr[] = {6,7,8,9};
  set1.insert(arr,arr+4);

  // Find value, get iterator and then value
  auto val = set1.find(6);
  std::cout << "Found : " << *val << "\n";

  // Get iterator to value
  auto eight = set1.lower_bound(8);
  std::cout << "8 : " << *eight << "\n";

  // Get iterator to value after
  auto nine = set1.upper_bound(8);
  std::cout << "9 : " << *nine << "\n";

  // Swap values in sets
  std::set<int> set2 {10,11};
  set1.swap(set2);

  // Check if empty and if not print values
  if(!set1.empty()){
    for(int i : set1)
    std::cout << i << "\n";
  }

  // ----- END OF SET -----

  std::cout << "\n";

  // ----- MULTISET -----
  // Stores duplicate values in sorted order
  // Other than that it is the same as set
  std::multiset<int> mset1 {1,1,2,3,4};

  // Insert value
  mset1.insert(4);
  mset1.insert(0);

  if(!mset1.empty()){
    for(int i : mset1)
    std::cout << i << "\n";
  }

  // ----- END MULTISET -----

  std::cout << "\n";

  // ----- MAP -----
  // Stores using key value pairs and you
  // can't have duplicate keys
  std::map<int, std::string> map1;

  // Insert key values
  map1.insert(std::pair <int, std::string> (1, "Bart"));
  map1.insert(std::pair <int, std::string> (2, "Lisa"));
  map1.insert(std::pair <int, std::string> (3, "Marge"));
  map1.insert(std::pair <int, std::string> (4, "Homer"));

  // Find element by key
  auto match = map1.find(1);
  std::cout << match->second << "\n";

  // Get iterator to value
  auto bart = map1.lower_bound(1);
  std::cout << "LB : " << bart->second << "\n";

  // Get next iterator
  auto lisa = map1.upper_bound(1);
  std::cout << "UB : " << lisa->second << "\n";

  // Print elements with an iterator
  std::map<int, std::string>::iterator it2;
  for(it2 = map1.begin(); it2 != map1.end(); ++it2){
    std::cout << "Key : " << it2->first << "\n";
    std::cout << "Value : " << it2->second << "\n";
  }

  // ----- END OF MAP -----

  // ----- MULTIMAP -----
  // Like map except you can have duplicate keys as long
  // as the values are different
  std::multimap<int, std::string> mmap1;
  mmap1.insert(std::pair <int, std::string> (1, "Bart"));
  mmap1.insert(std::pair <int, std::string> (1, "Lisa"));
  mmap1.insert(std::pair <int, std::string> (3, "Marge"));
  std::map<int, std::string>::iterator it3;
  for(it3 = mmap1.begin(); it3 != mmap1.end(); ++it3){
    std::cout << "Key : " << it3->first << "\n";
    std::cout << "Value : " << it3->second << "\n";
  }

  // ----- END OF MULTIMAP -----

  // ----- CONTAINER ADAPTERS -----
  // Adapt containers to provide a defined interface

  // ----- STACK -----
  // Provides an interface for storing elements in a LIFO
  // format
  std::stack<std::string> custs;
  custs.push("George");
  custs.push("Louise");
  custs.push("Florence");

  // Get number of elements
  int size = custs.size();

  // Check if empty
  if(!custs.empty()){
    for(int i = 0; i < size; i++){

      // Get value with top
      std::cout << custs.top() << "\n";

      // Delete last value entered
      custs.pop();
    }
  }

  // ----- END OF STACK -----

  // ----- QUEUE -----
  // Provides an interface for storing elements in a FIFO
  // format
  std::queue<std::string> cast;
  cast.push("Zoidberg");
  cast.push("Bender");
  cast.push("Leela");
  int size2 = cast.size();

  if(!cast.empty()){
    for(int i = 0; i < size2; i++){

      // Get value with top
      std::cout << cast.front() << "\n";

      // Delete last value entered
      cast.pop();
    }
  }

  // ----- END OF QUEUE -----

  // ----- PRIORITY QUEUE -----
  // Elements are organized with the largest first
  std::priority_queue<int> nums;
  nums.push(4);
  nums.push(8);
  nums.push(5);
  int size3 = nums.size();

  if(!nums.empty()){
    for(int i = 0; i < size3; i++){

      // Get value with top
      std::cout << nums.top() << "\n";

      // Delete last value entered
      nums.pop();
    }
  }

  // ----- END OF PRIORITY QUEUE -----

  // ----- ENUMS -----
  // Custom data type that assigns names to
  // constant integers so that a program is
  // easier to read

  // You can define the starting index, or any others
  enum day{Mon=1, Tues, Wed, Thur, Fri=5};

  enum day tuesday = Tues;

  std::cout << "Tuesday is the " << tuesday << "nd day of the week\n";

  // Cycle through days
  for(int i = Mon; i <= Fri; i++)
    std::cout << i << "\n";

  // ----- END OF ENUMS -----

  return 0;
}
