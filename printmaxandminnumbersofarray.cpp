#include <iostream>
using namespace std;
int main()
{
    int array[10],i=0;
    int max = 0;
    int min = 0;
    for(i=0;i<10;i++){
        cout<<"Enter element no "<<i<<": ";
        cin>>array[i];
    }
    for(i=0;i<10;i++)
    {
        if(array[i]>max){
            max = array[i];
        } else if(array[i]<min){
            min = array[i];
        }
    }
    cout<<"\n-------------------------------\n";
    cout<<"Maximum number is: "<<max<<endl;
    cout<<"Minimum number is: "<<min<<endl;
    cout<<"\n-------------------------------\n";
    return 0;
}
