#include <iostream>
using namespace std;

int main() {
    /* The code below is my first time proper C++ code 
    so its great no matter what you say*/
    cout << "Hello World! \n";
    // This is a comment 
    cout << "Harshit is learning C++ before college \n";
    int myNum = 15;
    myNum = 10;
    int vedik = 9;
    cout << vedik << endl;
    cout <<myNum << endl;
    cout <<"So rating of vedik is " << vedik << ".";
    cout << "Let's try to make my basic physical intro \n";
    string name = "Harshit";
    int age = 17;
    double Height = 5.10;
    cout << "I am " << name << "." << endl;
    cout << "I am " << age << " year old." << endl;
    cout << "My height is slightly above " << Height << " foot." << endl;
    cout << "Let's do some basic maths now \n I am trying to add 28 and 19.23 using c++ let's see result on next line. \n";
    int x = 28;
    double y = 19.23;
    double sum = x + y;
    cout << sum << endl;
    cout << "so what I make from this little operation of mine is that using \"int\" will only show integer even though my input ain't integer, using \"double\" will show whatever number I have written, only number and symbol, no letter \n"; 
    cout << "This operation is just for understanding list, I will be adding Vedik, Aarna and my current age to understand listing in variables better.\n";
    int v = 14, a = 12, h = 17;
    int OperationAge = v+a+h;
    cout << OperationAge << endl;
    cout << "I also just read that I can give different name to single value, but same name can't be given to different value. Later part was not read, It was discovered during previous operation. \n ";
    int k,r;
    k=r=26;
    cout << "My parent's anniversary is on " << k << " January. \n";
    /*Before going any further I would like to remember that what are the types of variable so I am copy pastening whole pointers from w3school
        "int" - stores integers (whole numbers), without decimals, such as 123 or -123
        "double" - stores floating point numbers, with decimals, such as 19.99 or -19.99
        "char" - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
        "string" - stores text, such as "Hello World". String values are surrounded by double quotes
        "bool" - stores values with two states: true or false*/
    cout << "Ok so variables are readable and changable while constants are only readable. I don't know how others can change variables value but I am sure that in future I would know. \n Let's see some example of constants. \n ";
    const int what = 34;
    cout << what << endl;
    cout << "Now I understand, I can only change value of constant from its orignal, home line, I can't change by just saying \"it's name =\".\n";
    cout << "In w3school's website there were 2 examples, out of which I feel like I have already done one just not in exact style but okay. I will now do secound one. \n";
    //Volume of Cuboid
    cout << "They gave me an example of area, I came up with volume, lets calculate volume of cuboid whose length is 34m, width 50m and height 43m.\n ";
    int length = 34;
    int height = 43;
    int breath = 50;
    int volume = length*breath*height;
    cout << "Volume of the mentioned cuboid should be " << volume << "m.\n";




    
    return 0;

}

