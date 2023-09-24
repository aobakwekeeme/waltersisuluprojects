#include "bookInventorySystem.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Book b1("Introduction To Computer Science", "Gilbert Brands", "978-1492827849", 228.07);//INSTANTIATION
    b1.displayBookInfo();//Accesses Book class

    Book b2("Introducing Web Development", "Jorg Krause", "9781484224984", 921.99);
    b2.displayBookInfo();

    Book b3("The Power of Your Subconscious Mind", "Joseph Murphy", "9781684223916", 129.03);
    b3.displayBookInfo();

    Book b4("The Power of Habit", "Charles Duhigg", "9781847946249", 309.99);
    b4.displayBookInfo();

    Book b5;
    b5.displayBookInfo();

    //Outputs total number of books OR total objects created
    cout << "Total number of books: " << b1.getTotalBooks() << endl;

    return 0;
}
