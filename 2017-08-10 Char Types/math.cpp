#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>



using namespace std;


int main() {
    srand (time(NULL));
    cout << abs(-123123.1231) <<endl;
    cout << cos(20)<<endl;
    cout << ceil(20.231)<<endl;
    cout << floor(20.231)<<endl;
    cout << sqrt(20.321)<<endl;
    cout << pow(20.321,3)<<endl;
    cout << log(20.321)<<endl<<endl;
    cout << rand()%100+1;


}
