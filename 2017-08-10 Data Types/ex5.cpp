#include <iostream>


using namespace std;


int main() {

    int seconds;
REPEAT: {
        cout << "Input Seconds:";
        cin >> seconds;

        int days = seconds/86400;
        seconds = seconds%86400;

        int hours = seconds/3600;
        seconds=  seconds%3600;

        int minutes = seconds/60;
        seconds = seconds%60;

        cout << days <<" Days " << hours <<" Hours "<< minutes<< " Minutes "<< seconds<< " Seconds \n";
    };




    goto REPEAT;
}
