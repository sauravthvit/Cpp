#include<iostream>
using namespace std;

//This program will calculate the area of a room in sqft.

int main() {

    //Initialised variables


    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " sqft." << endl;

    return 0;
}