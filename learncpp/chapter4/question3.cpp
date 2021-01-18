/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter one of the following: +, -, *, or /: *
6.2 * 5 is 31
*/
#include <iostream>

int main()
{
    double first_input {};
    double second_input {};
    char math_symbol {};
    double result {};

    std::cout << "Enter a double value: " << std::endl;
    std::cin >> first_input;
    std::cout << "Enter a double value: " << std::endl;
    std::cin >> second_input;
    std::cout << "Enter one of the following: +, -, *, or /: * ";
    std::cin >> math_symbol;

    if(math_symbol == '+')
    {
        result = first_input + second_input;
        std::cout << first_input << " + " << second_input << " is " << result << std::endl;
    }
    if(math_symbol == '-')
    {
        result = first_input - second_input;
        std::cout << first_input << " - " << second_input << " is " << result << std::endl;
    }
    if(math_symbol == '*')
    {
        result = first_input * second_input;
        std::cout << first_input << " * " << second_input << " is " << result << std::endl;
    }
    if(math_symbol == '/' || math_symbol == ':')
    {
        result = first_input / second_input;
        std::cout << first_input << " / " << second_input << " is " << result << std::endl;
    }
    else
    {
        std::cout << "Invalid symbol" << std::endl;
        return 1;
    }

    

    return 0;
}