#include <iostream>
using namespace std;

int main()
{
    int total = 0;
    int avg = 0;
    int even_nums_count =0;
    int array[3];
    for (int i=0;i<3;i++){
        cout<<"Enter value for element no. "<<i<<": ";
        cin>>array[i];

        if (array[i]%2==0){
            even_nums_count = even_nums_count + 1;
            total = total + array[i];
            avg = total / even_nums_count;
        }
        else{
            cout<<"\/\!\\ Odd number detected. Entry ignored. \/\!\\\n";
        }
}

     cout<<"\n-----------------------------------------\n";
     cout<<"Total of EVEN array elements\t= "<<total;
     cout<<"\nAverage of EVEN array elements\t= "<<avg;
     cout<<"\n-----------------------------------------\n";
}
