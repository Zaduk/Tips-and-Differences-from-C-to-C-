//C++ needs the g++ compiler, while C uses gcc

#include <iostream>
#include <cmath>
#include <string>
#include <fstream> //for file I/O

#define SOME_CONSTANT 10 //defined constant is capitalized by convention. Useful because it doens't take up memory

const int woof = 30; //another way to define a constant

using namespace std; //a namespace is a set of names that prevent naming conflicts with objects in various modules

int main() {
    typedef int customName; //typedef is used to assign a new name to an existing data type or object; equivalent to 'new' in C#
    
    std::string myString = "hi"; //string is a class in C++, so there are many methods like:
    int size = myString.size();
    std::cout << "Hello World!\n" << "bananas" << 123 << 'f' << std::endl;

    //strings
    string sample ("This is a sample sentence."); //alt. way to declare and initialize a string
    //sample.erase(3,2); //erase a part of the string
    sample.begin(); //get the starting char of the string, and end with .end()
    cout << sample << endl;


    //int num;
    //cin >> num; //only takes one word or group of characters
    string meow;
    getline(cin,meow); //getline only handles strings
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

    //if the file has multiple lines
    string line_2;
    ifstream output_file_3 ("<file's drive address>"); //in the address, use double backslashes to specify the location
    cout << "Title\n";

    while (getline(output_file_3, line_2))
        cout << line_2 << endl;
    output_file_3.close();
    return 0;
}
