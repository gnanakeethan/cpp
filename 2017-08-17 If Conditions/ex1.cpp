#include <iostream>

using namespace std;


int main() {

    int number,odd;

    cout << "Enter a Number:";
    cin >> number;

    odd = number%2;

    if(odd) {
        cout << number << " is a odd number";
    }
    else {
        cout << number << " is a even number";
    }


}
