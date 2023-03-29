#ifndef Library_H 
#define Library_H
#include "practice.h"
using namespace std;

class Library {      
private:
int numBooks;
Book * BookList;

public:   

Library();          
Library(int a_size); 
bool addBook(Book new_book);
int currentNumBooks;  
int getCurrentNumBooks();
//~Library();

};
#endif
