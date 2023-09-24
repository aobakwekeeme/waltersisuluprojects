#include <iostream>
#include <string>
using namespace std;
//Class prototype
class Book {
private:
    string title, author, isbn;
    double price;
    static int noOfBooks;

public:
    Book();
    Book(string, string, string, double);
    void displayBookInfo() const;
    static int getTotalBooks();
};
