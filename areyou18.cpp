#include <iostream>
using namespace std;

int main()
{
        float age;
        cout << "Please enter your age: ";
        cin >> age;
        if (age>=18){
            cout << "You are eligible to vote.";
        }
        else{
            cout << "You are NOT eligible to vote!";
        }

        cout << "\nEND";
        return 0;
}

