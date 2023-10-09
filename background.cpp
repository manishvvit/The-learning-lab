#include <iostream>

int main() {
    std::cout << "\x1b[47mHello, white background! hahhahahhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh\x1b[0m\n"; // Set background color to white, \x1b[0m resets color
    std::cout << "Back to normal background!\n";

    return 0;
}