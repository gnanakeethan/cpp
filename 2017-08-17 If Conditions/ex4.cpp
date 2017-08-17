#include <iostream>

using namespace std;


int main() {

    long double a,b;
    cout << "Input a number:";
    cin >> a;
    cout << "Input another number:";
    cin >> b;
    if(a>b) {
        cout << a << " Greater than "<<b;
    }
    else {
        cout << b << " Greater than "<<a;
    }


}

