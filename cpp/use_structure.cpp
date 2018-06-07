#include <iostream>
#include <cstring>

using namespace std;

struct Books {
  char  title[50];
  char  author[50];
  char  subject[100];
  int   book_id;
};

int main() {
  struct Books Book1;
  struct Books Book2;

  strcpy( Book1.title, "Zero to One");
  strcpy( Book1.author, "Peter Thiel");
  strcpy( Book1.subject, "Zero to One");
  Book1.book_id = 6495407;

  strcpy( Book2.title, "Sapiens, A Brief History of Humankind");
  strcpy( Book2.author, "Yuval Noah Harari");
  strcpy( Book2.subject, "Sapiens");
  Book2.book_id = 6495700;

  cout << "Book 1 title : " << Book1.title <<endl;
  cout << "Book 1 author : " << Book1.author <<endl;
  cout << "Book 1 subject : " << Book1.subject <<endl;
  cout << "Book 1 id : " << Book1.book_id <<endl;

  cout << "Book 2 title : " << Book2.title <<endl;
  cout << "Book 2 author : " << Book2.author <<endl;
  cout << "Book 2 subject : " << Book2.subject <<endl;
  cout << "Book 2 id : " << Book2.book_id <<endl;

  return 0;
}
