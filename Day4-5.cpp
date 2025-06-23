#include <iostream>
#include <string>

int main () {

    //Learning Strings
std::cout << "Ok so first thing we try today is string concatennation. \n Type your Firstname \n";
std::string firstname;
std::cin >> firstname;
std::cout <<"Type your Lastname. \n";
std::string lastname;
std::cin >> lastname;
std::string fullname = firstname + " " + lastname;
std::cout << "Your full name is " << fullname << std::endl;
std::cout << "Write something meaningfull \n";
std::string meaningfull;
std::cin >> meaningfull;
std::cout << "Your meaningfull text was " << meaningfull.size() << " charecter long. \n";
std::cout << "Let's analyse your first meaningfull letter, it was " << meaningfull[0] << std::endl;
std::cout << "Very nice, now let's take a quick peek in your last meaningfull letter " << meaningfull[meaningfull.length() - 1] << std::endl;
std::cout << "Let's now do something immorale \n";
meaningfull[0] = 'B';
std::cout << "Your meaningfull text becomes " << meaningfull << std::endl;
std::cout << "Now there are a number of ways to print any one of your given letter into ouput like there is one [] command and .at() command, in next line I will be using both for starting and ending letter of your new meaingfull text restpectively. \n";
std::cout << meaningfull[0] << std::endl;
std::cout << meaningfull.at(meaningfull.length() - 1) << std::endl;
/*Found this helpfull
Escape character	Result	Description
\'	                '	    Single quote
\"	                "	    Double quote
\\	                \	    Backslash      
\n	                    New Line	
\t	                    Tab                    */




/*A new Day, Day NO. 5, will continue Strings for now*/
std::cout << "Now finnaly will be able to get explanation on getline, also this is first time in w3school that they are saying space/tab terminates std::cin input. \n";
std::cout << "Type your fullname \n";
std::string name;
std::cin.ignore(); //This line has been learnt from chatgpt as it's important to clear the queed text in cin input before making getline command. Queed text is generated while pressing enter is std::cin command
std::getline (std::cin, name);
std::cout << "Your fullname is " << name << std::endl;
char greeting[] = "Hello";






return 0;
}