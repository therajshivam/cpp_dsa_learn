#include <iostream>
using namespace std;

void printInfo(const string name, const int age);

int main() {
    // const parameter = parmeter that is effectiively read-only
                        // code is more secure and conveys intent 
                        // useful for references and pointers 

    string name = "Bro";
    int age = 21;

    printInfo(name, age);
    return 0;
}

void printInfo(const string name, const int age) {
    cout << name << '\n';
    cout << age << '\n';
}