#include <iostream>
#include <cmath>
#include <string>
#include <fstream> //for file I/O

//constants
#define SOME_CONSTANT 10 //defined constant is capitalized by convention. This method is useful because it doens't take up memory
const int woof = 30; //another way to define a constant is to qualify a variable with as 'const'
enum { myConst = 4 }; //or this.

using namespace std; //a namespace is a set of names that prevent naming conflicts with objects in various modules

int main() {
    typedef int customName; //typedef (also used in C) is used to assign a new name to an existing data type or object; equivalent to 'new' in C#

    //the string class
    std::string myString = "hi"; //string is a class in C++, which has many objects and methods like .size(), endl to easily handle strings
    int size = myString.size();
    std::cout << "Hello World!\n" << "bananas" << 123 << 'f' << std::endl; //cout (charater output) is the main print function in C++

    string sampleString ("This is a sample sentence."); //the string class way to declare and initialize a string
    sampleString.erase(3,2); //erase a part of the string
    sampleString.begin(); //get the starting char of the string, and end with .end()
    cout << sampleString << endl;
    //use dot notation suggestions to explore all the various methods that come with the string class/module!
    

    //Since C++ has a string class, you can handle strings like you would in Python, with methods, most of which are the same or similar.
    //This class makes handling strings INSANELY easier than in C, where strings are just arrays of characters and manupulating them is actual hell.

    //Concatenate two string by adding the two together. Alternatively, you can use += to append other string segments to an original string variable.
    
    //input
    int num;
    cin >> num; //only takes one word or group of characters. Notice how it's two greater than signs and not less than for input.
    // to know whether it's << or >>, think about where the data is flowing.
    string meow; //declared but not initialized
    getline(cin,meow); //getline(datastream, dataslot) only handles strings
    cout << meow << meow << meow.size() << endl;

    //misc
    cout << "To insert quotes inside a string, use the \"backslash\" operator before the internal quotes.\n";
    cout << "\u00A9"; //unicode for copyright symbol. See unicode-table.com/en for all Unicode universal symbol and char code.


    //file I/O - writing to a file
    ofstream output_file; //create output file so we can write data to file that we will open. ifstream is for reading data only.
    output_file.open("name.txt"); //open file
    string name;

    getline(cin, name); //get name from user
    output_file << name << endl; //write the input to name.txt
    output_file.close(); //close file

    //file I/O - reading from a file
    string line;
    ifstream output_file_2 ("name.txt");
    cout << "Contents of file" << endl;
    getline(output_file_2, line);
    cout << line << endl;
    output_file_2.close();

    // if the file has multiple lines
    string line_2;
    ifstream output_file_3 ("<file's drive address>"); //in the address, use double backslashes to specify the location
    cout << "Title\n";

    while (getline(output_file_3, line_2))
        cout << line_2 << endl;
    output_file_3.close();
    return 0;

    char x = 118;
    cout << "The letter associated with " << (int) x << " is " << x << endl;

    unsigned char y = 162;
    cout << "The letter associated with " << (int) y << " is " << y << endl;

    //use boolalpha when you want to print a bool as true or false and not 1 or 0.
    cout << std::boolalpha;

    /*special numbers
    NaN or nan is output to the console in the event that a special unrecognized number is output, 
    such as an imaginary number.
    Infinitely large numbers will be returned as 'inf' or '-inf'. Synonyms in code are NAN and (-)INFINITY. */

    //some math functions
    remainder(3,1);
    fmod(6,2);
    fmax(3,6); //similar to max() in Python. returns greatest number out of max 2 arguments.
    fmin(3,4);
    
}
