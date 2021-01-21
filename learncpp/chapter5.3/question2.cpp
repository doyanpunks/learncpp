/*
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a function called isEven() that returns true if an integer passed to it is even, and false otherwise. Use the modulus operator to test whether the integer parameter is even.
Hint: You’ll need to use if statements and the comparison operator (==) for this program. See lesson 4.9 -- Boolean values if you need a refresher on how to do this.

Your program should match the following output:

Enter an integer: 5
5 is odd
*/

#include <iostream>
#include <iomanip>

bool isEven (int user_input)
{
    if(user_input % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::cout << "Enter integer: " << std::endl;
    int input {};
    std::cin >> input;

    std::cout << std::boolalpha << isEven(input) << std::endl;
    return 0;
}