#include <iostream>

// Function to demonstrate call by value
void callByValue(int x) {
    std::cout << "Inside callByValue function before modification: " << x << std::endl;
    x = 100; // Modifying the parameter value
    std::cout << "Inside callByValue function after modification: " << x << std::endl;
}

// Function to demonstrate call by reference
void callByReference(int &x) {
    std::cout << "Inside callByReference function before modification: " << x << std::endl;
    x = 100; // Modifying the original variable through reference
    std::cout << "Inside callByReference function after modification: " << x << std::endl;
}

int main() {
    int num = 50;

    // Demonstrating call by value
    std::cout << "Before calling callByValue function: " << num << std::endl;
    callByValue(num);
    std::cout << "After calling callByValue function: " << num << std::endl;

    // Demonstrating call by reference
    std::cout << "\nBefore calling callByReference function: " << num << std::endl;
    callByReference(num);
    std::cout << "After calling callByReference function: " << num << std::endl;

    return 0;
}

