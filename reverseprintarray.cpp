/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[3],i=0;
    for(i=0;i<3;i++){
        cout<<"Enter element no "<<i<<": ";
        cin>>arr[i]; 
    }
    for(i=2;i>=0;i--)
    { 
        cout<<"Element ("<<i<<") is: "<<arr[i]<<endl;
    }    
      
    return 0;
}

