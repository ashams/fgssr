# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2, result;

    cout << "Enter an operator (+ or - or * or /): ";
    cin >> op;

    cout << "Enter first operand: ";
    cin >> num1;

    cout << "Enter second operand: ";
    cin >> num2;

    if(op = '+')
        result = num1+num2;
    else if(op = '-')
        result = num1-num2;

    else if(op = '*')
        result = num1*num2;

    else if(op = '/')
        result = num1/num2;
    else
        cout << "Error: Not a valid operation";
    cout << num1<<" "<<op<<" "<<num2<<" = "<<result;

}
