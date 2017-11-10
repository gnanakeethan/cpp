#include <iostream>

using namespace std;

int main()
{
    int option;
    float conv,input;
    const float CONVERSION = 2.54;

    cout << "Choose a conversion" << endl;
    cout << "1. Inches to Centimetres" << endl;
    cout << "2. Centimetres to Inches" << endl;
    cin >> option;
    if (option==1)
    {
        cout << "\n\nEnter in Inches: ";
        cin >> input;
        conv = input*CONVERSION;
        cout << input << " Inches is equal to"<< conv << " Centimetres" << "\n\n";
    }
    else if(option == 2)
    {
        cout << "\n\nEnter in Centimetres: ";
        cin >> input;
        conv = input/CONVERSION;
        cout << input << " Centimetres is equal to"<< conv << " Inches" << "\n\n";
    }
    return 0;
}
