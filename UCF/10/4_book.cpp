// Define a class Book with bookid, title and price as instance member variables.
// Define non parameterised and parameterised constructor in the class.

#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        int bookId;
        string title;
        float price;
    
    public:
        Book(){};
        Book(int id, string bookingTitle, float bookingPrice){
            bookId = id;
            title = bookingTitle;
            price = bookingPrice;
        }

        void ShowBookDetails(){
            cout << "Book Id: " << bookId << endl;
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
            cout << endl;
        }
};

int main(){
    Book book1(101, "My first book", 2100);
    book1.ShowBookDetails();
    return 0;
}