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

    switch(op)
    {
        case '+':
            result = num1+num2;
            break;

        case '-':
            result = num1-num2;
            break;

        case '*':
            result = num1*num2;
            break;

        case '/':
            result = num1/num2;
            break;

        default:
            cout << "Error: Not a valid operation";
            break;
    }
    cout << num1<<" "<<op<<" "<<num2<<" = "<<result;

}
