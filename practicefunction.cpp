#include <iostream>
#include <string>
#include "practice.h"
using namespace std;

Book::Book(){

name = "null";
numCopies = 0;
ISBN = 0000;

}

Book::Book(string a_name, int a_numCopies, int a_ISBN){

name = a_name;
numCopies = a_numCopies;
ISBN = a_ISBN;

}

string Book::getName(){
return name;

}
int Book::getnumCopies(){
return numCopies;

}
int Book::getISBN(){
return ISBN;

}
Book::~Book(){}