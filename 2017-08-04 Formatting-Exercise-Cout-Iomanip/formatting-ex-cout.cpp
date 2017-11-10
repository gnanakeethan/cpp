#include <iostream>


using namespace std;


int main (void){
    double up,qty,discr,total,disct,payable;
    int width =20;
    cout.width(width);
   cout.setf(ios::left);
   return 0;
   cout << "Enter Unit Price" << ": ";
   cin >> up;
   cout.width(width);
   cout.setf(ios::left);
   cout << "Enter Quantity" << ": ";
   cin >> qty;
   cout.width(width);
   cout.setf(ios::left);
   cout << "Enter Discount Rate" << ": ";
   cin >>discr;
   cout << "\n\n\n";

   total = up*qty;
   disct = total*discr/100;
   payable = total - disct;

   cout.width(width);
   cout.fill('.');
   cout.setf(ios::fixed);
   cout << "Total Price is" <<": " << "Rs ";

   cout.precision(2);
   cout.fill(' ');
   cout.width(10);
   cout.setf(ios::right);
   cout << total <<endl;



   cout.width(width);
   cout.fill('.');
   cout.unsetf(ios::right);
   cout << "Discount is" <<": "<< "Rs ";
   cout.fill(' ');
   cout.width(10);
   cout.precision(2);
   cout.setf(ios::right);
   cout << disct<<endl;



   cout.unsetf(ios::right);cout.width(width);cout.fill('.');cout.precision(2);cout.setf(ios::fixed);
   cout << "Payable is" << ": "<<"Rs ";
   cout.width(10);
   cout.fill(' ');
   cout.setf(ios::right);
   cout <<payable<<endl;
}
