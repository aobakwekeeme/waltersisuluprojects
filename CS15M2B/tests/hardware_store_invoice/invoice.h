#include <iostream>
#include <string>
using namespace std;

//Class prototype
class Invoice {
private: //Private data members
    string partNumber, partDescription;
    int quantityPurchased;
    double price;

public: //Public member methods
    Invoice(); //default constructor
    void set_partNum(string&), set_partDes(string&), set_quantityPur(int&), set_price(double&);
    string get_partNum(), get_partDes();
    int get_quantityPur();
    double get_price();
    int getInvoiceAmount();
};
