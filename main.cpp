#include <iostream>
using namespace std;

int main() {

    int favourite_num;
    std::cout << "Enter your favourite number between 1 and 100:" << std::endl;
    std::cin >> favourite_num;
    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    std::cout << "No really!! " << favourite_num << " is my favourite number!" << std::endl;

    return 0;
}