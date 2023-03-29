#include <iostream>
#include <string>
#include "practice.h"
using namespace std;

extern int book(string name, int numCopies, int ISBN);

int main (void){

//int size = 5;

string name = "Mythos";
int numCopies = 5;
int ISBN = 6666;

Book b1("Mythos", 5, 6666);

cout << "Name: " << b1.getName() << "Copies Available: " << b1.getnumCopies() << "ISBN: " << b1.getISBN() << endl; 




}