#include <iostream>
using namespace std;

int main(){
int x=10,y=15,z=0;

if(x>y)
    if(x%2 !=0 )
        z=x;
else
    z=y;

cout << "z is :"<< z;
}
