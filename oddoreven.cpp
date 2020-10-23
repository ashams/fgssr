#include <iostream>

using namespace std;

int main()
{
        int x;
        cout << "Enter a number\n";
        cin >> x;
        if (x%2==0){
                cout << "This number is Even.\n";
        }
        else {
              cout << "This number is Odd.\n";
        }
        cout << "END";
        return 0;
}
