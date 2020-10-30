#include <iostream>
using namespace std;

int main()
{
    int total;
    int array[3];
    for (int i=0;i<3;i++){
        cout<<"Enter an element no. "<<i<<": ";
        cin>>array[i];
        total = total + array[i];
     }
     cout<<"Total of array elements = "<<total;
}
