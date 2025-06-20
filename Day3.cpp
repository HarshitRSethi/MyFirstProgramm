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
    


    //Learning Operators

    /*Here is a list that might help
    Operator    	        Description	                Example
    +	Addition    	    Adds together two values	                x + y	
    -	Subtraction 	    Subtracts one value from another	        x - y	
    *	Multiplication  	Multiplies two values	                    x * y	
    /	Division	        Divides one value by another	            x / y	
    %	Modulus	            Returns the division remainder	            x % y	
    ++	Increment	        Increases the value of a variable by 1  	++x	
    --	Decrement	        Decreases the value of a variable by 1  	--x
    */

    std::cout << "Creating a number comparing tool \n";
    int x,y;
    std::cout << "Entery first no.- \n";
    std::cin >> x;
    std::cout << "Your first no. is " << x << ". \n Enter your secound no.- \n";
    std::cin >> y;
    std::cout << "Your secound number is " << y << ". \n";
    std::cout << (x<y) << (x==y) << std::endl << "You will see 00 if your first number is greater than secound number,01 if both are equal and if secound no. is greater then you will see 11.\n";
    std::cout << "Will be checking if both numbers are greater than 50. \n";
    std::cout << (x>50 && y>50) << std::endl << "If check verified than above line would say 1 otherwise 0.";
    // And-&&, Or-||, Reverse-!

    //End of operator




    
    
    
    
    
    





    return 0;
}