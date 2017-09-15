#include <iostream>


using namespace std;

int main(){

    int a,b,c=1;
    a=5;
    b=25;
    while (a!=b){
        cout << c++;
        cout <<endl;
        b-=5;
        a+=5;
    }
}
