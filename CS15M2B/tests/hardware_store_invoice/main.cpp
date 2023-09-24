#include "invoice.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string _partNumber, _partDescription;
    int _quantityPurchased;
    double _price;

    cout << "PLEASE DO NOT ENTER SPACES BETWEEN!" << endl; //warning to the user
    //Prompts user for parts data
    cout << "Please enter Part Number: ";
    cin >> _partNumber;
    cout << "Please enter Part Description: ";
    cin >> _partDescription;
    cout << "Please enter Quantity Purchased: ";
    cin >> _quantityPurchased;
    cout << "Please enter Price per item: ";
    cin >> _price;
    cout << endl;

    Invoice Obj1; //instantiation
    //Accessing Invoice class
    Obj1.set_partNum(_partNumber);
    Obj1.set_partDes(_partDescription);
    Obj1.set_quantityPur(_quantityPurchased);
    Obj1.set_price(_price);

    cout << "Part number: " << Obj1.get_partNum() << endl << "Description: " << Obj1.get_partDes() << endl << "Quantity: " << Obj1.get_quantityPur() << endl << "Price per item: R" << Obj1.get_price() << endl << "Invoice amount: R" << Obj1.getInvoiceAmount() << endl;

    return 0;
} //End main function
