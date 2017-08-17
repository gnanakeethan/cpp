#include <iostream>

using namespace std;


int main() {

    long double qty,unitprice,totPrice,discount=0.0;
    cout << "Input unit price:";
    cin >> unitprice;
    cout << "Input qty:";
    cin >> qty;

    totPrice = qty*unitprice;

    if(totPrice>=10000) {
        discount=15.0;
    } else if(totPrice < 10000 && totPrice >=5000) {
        discount = 10.0;
    } else if (totPrice< 5000 && totPrice >=1000) {
        discount = 05.0;
    }

    cout << "Total Price:" << totPrice;
    cout <<  "Price Discount :" << totPrice * discount / 100.0;


}




