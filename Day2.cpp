#include <iostream>
using namespace std;

int main(){
    //Today we will learn C++ User Input

    int x;
    cout << "Type a number";
    cin >> x;
    cout << "Your number is " << x << endl;
    cout << "It worked YES, let's try to create a simpe addition machine \n";
    int a,b,c;
    cout << "Welcome to my simple addition machine in which you can add upto 3 integers \n";
    cout << "Type first No. \n";
    cin >> a;
    cout << "Your first No. was " << a << endl;
    cout << "Type second No. \n";
    cin >> b;
    cout << "Your secound No. was " << b << endl;
    cout << "Type third No. \n";
    cin >> c;
    cout << "Your third No. was " << c << endl;
    int sum = a+b+c;
    cout << "Your sum is " << sum << ". \n";

return 0;
}