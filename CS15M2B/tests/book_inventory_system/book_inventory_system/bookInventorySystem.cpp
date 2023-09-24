#include "bookInventorySystem.h"
//default constructor which initializes my data member by default
Book::Book() {
    title = "N/A";
    author = "N/A";
    isbn = "N/A";
    price = 0.0;
    noOfBooks++;
}
//Initializes noOfBook data member
int Book::noOfBooks = 0;
//Parameterized constructor which assign values to data members by parameters passed by reference
Book::Book(string Title, string Author, string ISBN, double Price) {
    title = Title;
    author = Author;
    isbn = ISBN;
    price = Price;
    noOfBooks++;
}
//void method which only prints book information
void Book::displayBookInfo() const{
    cout << endl << " ----------------------------------- " << endl << "             BOOK INFORMATION                " << endl << " ----------------------------------- " << endl << endl << "Title: " << title << endl << "Author: " << author << endl << "ISBN: " << isbn << endl << "Price: R" << price << endl << endl << "            *** END ***         " << endl << endl;
}
//static method which prints the number of books or object created
int Book::getTotalBooks() {
    return noOfBooks;
}
