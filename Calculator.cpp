#include <iostream>
#include <string>
#include <cmath>

int main () {
    std::cout << "Type your first No. \n";
       double x,y,z;
       std::cin >> x;
       std::cout << "Type your second No. \n";
       std::cin >> y;

    std::cout << "Please type symbol of your operation \n";
    char operation;
    std::cin >> operation;

    switch (operation) {

        case '+':
        z= x+y;
    std::cout << "Addition of your two given no. gave \"" << z << "\" as result. \n" ;
        break;

        case '*':
        z= x*y;
    std::cout << "Multiplication of your two given no. gave \"" << z << "\" as result. \n";
        break;

        case '-':
        z =x-y;
    std::cout << "Subtraction of your two given no. gave \"" << z << "\" as result. \n";
        break;

        case '/':
        z =x/y;
    std::cout << "Division of your two given no. gave \"" << z << "\" as result. \n";
        break;
        
        default:
        std::cout << "Please type any one correct operation symbol out of +, -, * and /.";
        break;
    }

    
return 0;
}