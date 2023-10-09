#include <windows.h>
#include<iostream>
using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    
    setColor(FOREGROUND_GREEN); // This will set text color to green
    std::cout << "Hello, colored text!\n";
    setColor(FOREGROUND_INTENSITY | FOREGROUND_RED); // This will set text color to bright red
    std::cout << "More colored text!\n";
    setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color to default
    std::cout << "Back to normal color!\n";

    return 0;
}