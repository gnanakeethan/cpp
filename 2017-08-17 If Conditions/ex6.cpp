#include <iostream>

using namespace std;


int main() {

    long double a;
    cout << "Input marks:";
    cin >> a;

    if(a<=100 && a>=75){
        cout << "A";
    } else if(a< 75 && a>=65){
        cout << "A";
    } else if(a<65 && a>=50){
        cout << "A";
    } else if(a<50 && a>=35){
        cout << "A";
    }  else {
        cout << "F";
    }
    cout << endl;
    return 0;



}



