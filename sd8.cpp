/* sd8.cpp
 * sourcefile for sd8
 * sd8 is a demo program for concepts found in Dmitrovic, Slobodan,
 * "Modern C++ for Absolute Beginners," Apress, 2020. Chapter 8 Standard
 * Input.
 *
 */

#include <iostream>

int main() {

    int x = 0;
    int y = 0;
    int z = 0;
    char c = 'a';
    char* p;
    p = &c;
    std::cout << "Please enter a number and press enter: ";
    std:: cin >> x;
    std::cout << "You entered: " << x << std::endl;

    // exercise 9.2 two inputs
    std::cout << "please enter two integer numbers: ";
    std::cin >> x >> y;
    z = x + y;
    std::cout << "The sum is " << z << std::endl;

    std::cout << "Pointer section\n";
    std::cout << "The address of the character " << c << " is " << p << "\n";
    std::cout << "Oops! The address is " << p << std::endl;


}
