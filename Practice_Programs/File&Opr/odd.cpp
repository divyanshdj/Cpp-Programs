#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("data.txt"); 
    // Open data.txt for Copy the Number
    ofstream oddFile("odd.txt"); 
    // Create odd.txt for odd numbers
    ofstream evenFile("even.txt"); 
    // Create even.txt for even numbers

    int num;
    while (inputFile >> num) {
        if (num % 2 == 0) {
            evenFile << num << endl; 
            // Write even number to even.txt
        } else {
            oddFile << num << endl; 
            // Write odd number to odd.txt
        }
    }

    inputFile.close();
    oddFile.close();
    evenFile.close();

    // Display the contents of all files

    cout << "Contents of data.txt:" << endl; 
    inputFile.open("data.txt");
    while (inputFile >> num) {
        cout << num << " ";
    }
    cout << endl;
    inputFile.close();

    cout << "Contents of odd.txt:" << endl;
    ifstream oddFileRead("odd.txt");
    while (oddFileRead >> num) {
        cout << num << " ";
    }
    cout << endl;
    oddFileRead.close();

    cout << "Contents of even.txt:" << endl;
    ifstream evenFileRead("even.txt");
    while (evenFileRead >> num) {
        cout << num << " ";
    }
    cout << endl;
    evenFileRead.close();

    return 0;
}
