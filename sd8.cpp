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
    std::cout << "Please enter a number and press enter: ";
    std:: cin >> x;
    std::cout << "You entered: " << x << std::endl;
}
