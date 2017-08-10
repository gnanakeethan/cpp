#include <iostream>


using namespace std;


int main() {
    int ch;
REPEAT:
    do {
        cout << "Enter ASCII Code: ";
        cin >> ch;
    } while(ch<65 || ch>127);
    cout << "ASCII Value is : " << (char) ch  << endl;
    goto REPEAT;
}
