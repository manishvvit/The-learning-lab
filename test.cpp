#include <iostream>
#include <fstream>
using namespace std;

int main() {
   
     string line;
    ifstream inFile("C:\Users\Manish Kumar\Desktop\student.txt");

     if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
