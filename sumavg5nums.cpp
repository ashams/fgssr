#include <iostream>

using namespace std;

int main()
{
        int x = 0;
        int i = 1;
        int sum = 0;
        float avg = 0;
        while (i <= 5){
                cout << "Please enter a number\n";
                cin >> x;
                sum = sum + x;
                avg = sum / i;
                cout << "Sum now is: " << sum <<'\n';
                cout << "Average now is: " << avg <<'\n';
                i = i + 1;
        }
        cout << "END";
        return 0;
}
