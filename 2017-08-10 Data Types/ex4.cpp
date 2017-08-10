#include <iostream>


using namespace std;


int main() {

    int salary;
REPEAT: {
        cout << "Input Salary: ";
        cin >> salary;
    };
    int coins[]= {1,2,5,10,20,50,100,500,1000,2000,5000};
    for(int a =10; a >=0; a--)
    {
        int coin=salary/coins[a];
        salary = salary-(coin*coins[a]);
        cout <<"Rs."<<coins[a] <<": "<<coin<<endl;
    }

    goto REPEAT;
}
