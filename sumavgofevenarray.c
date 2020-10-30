#include <iostream>
using namespace std;

int main()
{
    int total;
    int avg;
    int array[5];
    for (int i=0;i<5;i++){
        cout<<"Enter an element no. "<<i<<": ";
        cin>>array[i];
        if (array[i]%2=0){
            total = total + array[i];
            avg = avg + array[i];
        }
     }
     cout<<"Total of array elements = "<<total;
}
