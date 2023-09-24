#include "invoice.h"

Invoice::Invoice() { //Invoice method implementation
    partNumber = " ";
    partDescription = " ";
    quantityPurchased = 0;
    price = 0.0;
}

void Invoice::set_partNum(string &pn) { //set_partNUm method implementation
    partNumber = pn;
}
string Invoice::get_partNum() { //get_partNum method implementation
    return partNumber;
}

void Invoice::set_partDes(string &pd) { //set_partDes method implementation
    partDescription = pd;
}
string Invoice::get_partDes() { //get_partDes method implementation
    return partDescription;
}

void Invoice::set_quantityPur(int &qp) { //set_quantityPur method implementation
    quantityPurchased = qp;
}
int Invoice::get_quantityPur() { //get_quantityPur method implementation
    return quantityPurchased;
}

void Invoice::set_price(double &p) { //set_price method implementation
    price = p;
}
double Invoice::get_price() { //get_price method implementation
    return price;
}

int Invoice::getInvoiceAmount() { //getInvoiceAmount method implementation
    if(price < 0) {
        price = 0;
    }

    if(quantityPurchased < 0) {
        quantityPurchased = 0;
    }

    return price*quantityPurchased;
}
