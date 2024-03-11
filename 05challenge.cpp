//Challenge

/*Frank's Carpet Cleaning Service
Charges:
$25 = Small room
$35 = Large room
Sales Tax rate = 6%
Estimates are valid for 30 days*/

#include<iostream>

using namespace std;

int main() {

    cout << "Welcome to Frank's Carpet Cleaning Service" << endl << endl;

    const int small_room {25};
    const int large_room {35};
    const double sales_tax {0.06};
    const int estimate_validity {30};

    cout << "Enter the number of small rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "Enter the number of large rooms: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << small_room << endl;
    cout << "Price per large room: $" << large_room << endl;
    cout << "Cost: $" << (small_room * number_of_small_rooms) + (large_room * number_of_large_rooms) << endl;
    cout << "Tax: $" << ((small_room * number_of_small_rooms) + (large_room * number_of_large_rooms)) * sales_tax << endl;
    cout << "Total estimate: $" << ((small_room * number_of_small_rooms) + (large_room * number_of_large_rooms)) + (((small_room * number_of_small_rooms) + (large_room * number_of_large_rooms)) * sales_tax) << endl;

    cout << "This estimate is valid for " << estimate_validity << " days" << endl; 

}
