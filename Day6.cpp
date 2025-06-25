#include <iostream>
#include <string>
#include <cmath>

int main () {
    //Learning C++ If ...Else
    std::cout << "Here is a quick revision of basics, hope you will like it- \n Less than: a < b \n Less than or equal to: a <= b \n Greater than: a > b \n Greater than or equal to: a >= b \n Equal to a == b \n Not Equal to: a != b \n ";
    int x,y,z;
    std::cout << "Now back to business. \nEnter a No.\n";
    std::cin >> x;
    std::cout << "Enter another No.\n";
    std::cin >> y;
    if (x>y) {
        std::cout << "First No. is greater than second.";
    }
    else if (x==y) {
        std::cout << "Both No. are equal.";
    }
    else {
        std::cout << "Secound No. is greater than first.";
    }
    std::cout << std::endl << "Now give me a third No. which will be compared with second No. using ternary operator for shorted if ..else statements. \n";
    std::cin >> z;
    std::string result = (y>z) ? "Second No. is greater than third." : "Third No. is greater than Second.";
    std::cout << result;
    //Completed if.. else statement
    



   
   
    return 0;
}