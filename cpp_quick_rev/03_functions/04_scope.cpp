// local variables = declared inside a function or block {}
// global variables = declared outside of all functions

#include <iostream>
using namespace std;


int myNum = 3;

void printNum ();

int main () {

    printNum();

    return 0;
} 

void printNum () {

    cout << myNum;
}