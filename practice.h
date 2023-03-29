#ifndef PRACTICE_H 
#define PRACTICE_H
using namespace std;

class Book {      
private:
string name;
int numCopies;
int ISBN;


public:             
Book();          
Book(string name, int numCopies, int ISBN);   
string getName();
int getnumCopies();
int getISBN();
~Book();      

};
#endif

