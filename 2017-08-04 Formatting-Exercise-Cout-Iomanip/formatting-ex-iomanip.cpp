#include <iostream>
#include <iomanip>


using namespace std;


main (void){
    double up,qty,discr,total,disct,payable;
    int width =20;
   cout <<setw(width)<< setiosflags(ios::left) <<"Enter Unit Price" << ": ";
   cin >> up;
   cout << setw(width) <<setiosflags(ios::left) << "Enter Quantity" << ": ";
   cin >> qty;
   cout  <<  setw(width)<<   setiosflags(ios::left)<< "Enter Discount Rate" << ": ";
   cin >>discr;
   cout << "\n\n\n";

   total = up*qty;
   disct = total*discr/100;
   payable = total - disct;
   cout << setw(width) << setfill('.') << setiosflags(ios::left)  << "Total Price is" <<": " << "Rs ";
   cout << setprecision(2) <<   setfill(' ') <<   setw(10) <<   setiosflags(ios::fixed) << total <<endl;

   cout << setiosflags(ios::left)   <<  setw(width) << setfill('.') << "Discount is" <<": "<< "Rs ";
   cout << setprecision(2) <<   setfill(' ') <<   setw(10) <<   setiosflags(ios::fixed) <<disct<<endl;

   cout <<setw(width) << setfill('.') << setiosflags(ios::left)  << "Payable is" << ": "<<"Rs ";
   cout <<setprecision(2) <<   setfill(' ') <<   setw(10) <<   setiosflags(ios::fixed) << payable<<endl;
}
