#include <iostream>
#include <iomanip>

using namespace std;


void inputValues(double&,double&,double&,int);
double calculateSubtotal(double,double);
void printOutput(double[],double[],double[],double[]);

const int items=5;
const int width=80;


int main(){

    //defining arrays for storing values for items
    double qtyArray[items]={},priceArray[items]={},subTotals[items]={},discountArray[items]={};
    // temporary placeholder for quantity,price,and discount
    double qty=0.0,price=0.0,disc=0.0;



    for(int i=0; i<items;i++){

        inputValues(price, qty, disc, i+1);

        //appending values to arrays
        subTotals[i]    = calculateSubtotal(price,qty);
        qtyArray[i]     = qty;
        priceArray[i]   = price;
        discountArray[i]= disc;
    }

    printOutput(subTotals,qtyArray,priceArray,discountArray);


    return 0;
}

void inputValues(double &price, double &qty,double &discount, int i){
    cout << "Enter Price of the Item "    <<i<<":";
    cin  >> price;

    cout << "Enter Quantity for the Item "<<i<<":";
    cin  >> qty;

    cout << "Enter Discount for the Item "<<i<<":";
    cin  >> discount;

}


double calculateSubtotal(double price,double qty){
    double total = 0.0;

    total = price*qty;

    return total;
}

void printOutput(double subTotals[], double qtyArray[], double priceArray[], double discountArray[]){

    // final calculation values
    double discount = 0.0,total=0.0,itemDiscount=0.0,payable=0.0;
    // discount values
    double discountValues[]={};


    //prints dashes to a variable width
    cout << setfill('-') << setw(width) << "" << endl;

    //prints the title of table
    cout << setw(3)      << setfill(' ')<< setiosflags(ios::left) << "ITEM" << setw(10) << setiosflags(ios::right)<< "PRICE" << setw(10) << "QTY" << setw(16) << "SubTotal"<< setw(16) << "DISCOUNT" << setw(24) << "AMOUNT" << endl;


    //prints dashes to a variable width
    cout << setfill('-') << setw(width) << "" << endl;

    for (int i=0;i<items;i++){

        total        += subTotals[i];
        itemDiscount  = discountArray[i]*subTotals[i]/100;
        discount     += itemDiscount;
        payable      += subTotals[i]-itemDiscount;
        // printing each column in the table with a preset width
        cout << setw(3)  << setfill('0') << i+1 << ".";
        cout << setw(10) << setfill(' ') << setiosflags(ios::fixed)    << setprecision(2) << priceArray[i];
        cout << setw(10) << setiosflags(ios::fixed) << setprecision(2) << qtyArray[i];
        cout << setw(16) << setiosflags(ios::fixed) << setprecision(2) << subTotals[i];
        cout << setw(16) << setiosflags(ios::fixed) << setprecision(2) << itemDiscount;
        cout <<   "("    << setw(5)      << setfill(' ') << discountArray[i] <<"%)";
        cout << setw(16) << setfill(' ') << setiosflags(ios::fixed) << setprecision(2) << subTotals[i]-itemDiscount <<endl;

    }
    cout << setfill('-') << setw(width) << "" << endl;
    cout << setfill(' ') << "TOTALS "   << setw(33) << setiosflags(ios::right) << total;
    cout << setw(16)     << setiosflags(ios::right) << discount;
    cout << setw(24)     << setiosflags(ios::right) << payable << endl;
    cout << setfill('-') << setw(width) << "" << endl;
}
