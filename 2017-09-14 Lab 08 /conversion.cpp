#include <iostream>

using namespace std;

int main()
{
    int option;
    float cm,inch;
    cout << "SELECT YOUR OPTION\n" << endl;
    cout << "(1) - INCHES TO CM" << endl;
    cout << "(2) - CM TO INCHES" << endl;
    cin >> option;
    if (option==1)
    {
        cout << "ENTER THE VALUE OF INCHES :- ";
        cin >> inch;
        cm=(inch*2.54);
        cout << "THE CM VALUE IS :- "<< cm << "cm";
        cout << "\n";
    }
    else
    {
        cout << "ENTER THE VALUE OF CM :- ";
        cin >> cm;
        inch=(cm/2.54);
        cout << "THE INCHES VALUE IS :-" << inch << "inc";
        cout << "\n";
    }
    return 0;
}
