#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Create and open a text file
    fstrem MyFile("newfile.txt");
    // Write to newfile
    MyFile << "File handling in CPP";
    // Closing newfile
    MyFile.close();

}