#include <iostream>

using namespace std;

int main()
{
    float hp,hpw,wp;
    cout << "ENTER THE HOURLY PAY :- ";
    cin >> hp;
    cout << "ENTER THE HOURS PER WEEK:- ";
    cin >> hpw;
    wp = (hp*hpw);

    if (wp > 400)
        cout << "\nIT CAN AFFORD TO LIVE ALONE\n";
    else
        cout << "\nIT CAN'T AFFORD TO LIVE ALONE\n";

    return 0;
}
