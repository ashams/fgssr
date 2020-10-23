#include <iostream>

using namespace std;

int main()
{
        int r;
        int circle;
        int pi = 3.14159;
        cout << "Enter a radius: ";
        cin >> r;
        circle = 2 * pi * r;
        cout << "Circle Circumference = "<<circle<<"\n";
        cout << "END";
        return 0;
}
