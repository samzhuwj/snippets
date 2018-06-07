#include <iostream>
#include <cstring>

using namespace std;
void printBook( struct Books *book );

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

   printBook( &Book1 );
   printBook( &Book2 );

   return 0;
}

void printBook( struct Books *book ) {
  cout << "Book title : " << book->title <<endl;
  cout << "Book author : " << book->author <<endl;
  cout << "Book subject : " << book->subject <<endl;
  cout << "Book id : " << book->book_id <<endl;
}
