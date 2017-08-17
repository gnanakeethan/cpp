#include <iostream>

using namespace std;


int main() {

    long double a,b,c;
    cout << "Input a number:";
    cin >> a;
    cout << "Input another number:";
    cin >> b;
    cout << "Input another number:";
    cin >> c;
    if(a>b && a>c){
        cout << a;
    } else if(b>a && b>c) {
        cout << b;
    } else if(c>a && c>b) {
        cout << c;
    }


    return 0;

}


