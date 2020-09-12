#include <iostream>
using namespace std;

int main()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    cout << "Enter two numbers: ";

    cin >> firstNumber >> secondNumber;
     
    productOfTwoNumbers = firstNumber * secondNumber;  

    cout << "Product of two numbers is = " << productOfTwoNumbers;    
    
    return 0;
}
