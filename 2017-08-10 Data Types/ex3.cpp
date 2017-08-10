#include <iostream>


using namespace std;


int main() {
    char ch;
REPEAT:
    do {
        cout << "Enter Small Letter: ";
        cin >> ch;
    } while(int(ch)<95 || int(ch)>127);
    int chd = int(ch)-32;
    cout << "Capital Letter is:" << (char) chd <<endl;
    goto REPEAT;
}
