#include <iostream>
#include  <string>

int main(){
    //Learning C++ User Input

    int x;
    std::cout << "Type a number";
    std::cin >> x;
    std::cout << "Your number is " << x << std::endl;
    std::cout << "It worked YES, let's try to create a simpe addition machine \n";
    int a,b,c;
    std::cout << std::endl;
    std::cout << "Welcome to my simple addition machine in which you can add upto 3 integers \n";
    std::cout << "Type first No. \n";
    std::cin >> a;
    std::cout << "Your first No. was " << a << std::endl;
    std::cout << "Type second No. \n";
    std::cin >> b;
    std::cout << "Your secound No. was " << b << std::endl;
    std::cout << "Type third No. \n";
    std::cin >> c;
    std::cout << "Your third No. was " << c << std::endl;
    int sum = a+b+c;
    std::cout << "Your sum is " << sum << ". \n";
    std::cout << std::endl << std::endl << std::endl;

    //End of C++ User Input
    
    
    
    //Learning Data Types

    std::cout << "I wanted to experiment something \n";
    std::string f2;
    std::cout << "Do you live in your house?? True/False \n";
    std::cin >> f2;
    std::cout << "Your answer was " << f2 << std::endl;
    std::cout << "nice" << std::endl;
    std::string greetings = "Hello";
    std::cout << greetings << std::endl;
    std::cout << "So I just researched a thing and two on ChatGPt in order to understand my doubts and it turns out that best practice is to us string in header and making a habit of writing std::, totally fine with me. \n";
    auto harshit = "anything it can be";
    std::cout << harshit;
    std::cout << std::endl << std::endl << std::endl;
    
    //End of Data Types





    return 0;
}