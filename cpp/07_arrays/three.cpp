// accessing array values

#include<iostream>
using namespace std;


// passing array in function
int totalChaiServed(int chai[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += chai[i];
    }
    return total;
}


int main () {
    int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75};

    int total = totalChaiServed(chaiServed, 7);
    cout << "total number of chai served: " << total << endl;
    return 0;
}