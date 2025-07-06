// Define a class Room for a hotel management project with room number, room type,
// is_AC, price as instance variables. Initialise instance variables using constructor.
#include<iostream>
#include<string>
using namespace std;

class Room{
    private:
        int roomNumber;
        string roomType;
        float price;
        bool is_AC;
    
    public:
        Room(int roomNumber, string roomType, float price, bool is_AC):roomNumber(roomNumber), roomType(roomType), price(price), is_AC(is_AC){}
        void showData(){
            cout << "----------Room Number " << roomNumber << " Details-----------" << endl;
            cout << "Room Type: " << roomType << endl;
            cout << "Price: " << price << endl;
            if (is_AC)
            {
                cout << "AC Room: Yes" << endl;
            }else{
                cout << "AC Room: NO" << endl;
            }
        }
};

int main(){
    int userInput;
    Room hotelRooms[10] = {
        Room(101, "Standard", 120.0f, false),
        Room(102, "Standard", 120.0f, false),
        Room(103, "Deluxe", 180.5f, true),
        Room(104, "Standard", 120.0f, false),
        Room(105, "Suite", 350.0f, true),
        Room(106, "Deluxe", 180.5f, true),
        Room(107, "Standard", 120.0f, false),
        Room(108, "Suite", 350.0f, true),
        Room(109, "Deluxe", 180.5f, true),
        Room(110, "Standard", 120.0f, false)
    };
    cout << "Please enter the room numbe for details: ";
    cin >> userInput;
    hotelRooms[userInput-101].showData();
    return 0;
};