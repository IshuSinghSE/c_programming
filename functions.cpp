#include <iostream>

// Function declaration
void greet();
int add(int, int);
void printSum(int);

int main() {
    greet();
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = add(a, b);
    printSum(sum);

    return 0;
}

// Function definition
void greet() {
    std::cout << "Hello! Let's add two numbers." << std::endl;
}

int add(int num1, int num2) {
    return num1 + num2;
}

void printSum(int sum) {
    std::cout << "The sum is: " << sum << std::endl;
}
