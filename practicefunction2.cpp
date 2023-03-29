#include <iostream>
#include <string>
#include "practice.h"
#include "Library.h"
using namespace std;

Library::Library(){

int size = 0;

}
Library::Library(int a_size){

BookList = new Book[a_size];
currentNumBooks = 0;

}


int Library::getCurrentNumBooks(){
return currentNumBooks;

}
bool Library::addBook(Book new_book){

for (int i = 0; i<5; i++){

    BookList[(currentNumBooks)] = new_book;
    currentNumBooks++;

}

return 1;
}

//Library::~Library(){};
