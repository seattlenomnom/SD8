/* sd8.cpp
 * sourcefile for sd8
 * sd8 is a demo program for concepts found in Dmitrovic, Slobodan,
 * "Modern C++ for Absolute Beginners," Apress, 2020. Chapter 8 Standard
 * Input.
 *
 */

#include <iostream>
#include <string>

int main() {

    int x = 0;
    int y = 0;
    int z = 0;
    char c = 'a';
    char* p;
    p = &c;
    std::string s = "Hello, ";
    std::string s2 = "World!";
    std::string s3, s4;
/*
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
    std::cout << "Oops! The address is " << &c << std::endl;

    std::cout << "string section\n";
    std::cout << std::endl;
    s = s + s2;
    std::cout << s << std::endl;
*/
    std::cout << "Enter a string: ";
    std::getline(std::cin, s3);
    std::cout << "you entered: " << s3 << std::endl;
    std::cout << "a substring is ";
    s4 = s3.substr(0, 4);
    std::cout << "the substring is " << s4 << std::endl;



}
