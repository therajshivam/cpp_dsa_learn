#include <iostream>
using namespace std;

int main() {
    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n'; // give hexadecimal memory address

    return 0;
}