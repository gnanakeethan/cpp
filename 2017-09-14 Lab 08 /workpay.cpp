#include <iostream>

using namespace std;

int main()
{
    float hp,hpw,wp;
    cout << "Hourly Pay:";
    cin >> hp;
    cout << "Worked Hours Per Week:";
    cin >> hpw;
    wp = (hp*hpw);

    if (wp > 400)
        cout << "\n You can afford to live alone \n";
    else
        cout << "\n You can't afford to live alone \n";

    return 0;
}
