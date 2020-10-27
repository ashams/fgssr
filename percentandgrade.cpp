#include <iostream>
using namespace std;

int main()
{
        float mark = 0;
        float new_mark;
        char grade = 'G';
        float percentage;

        //TAKING INPUT FROM USER
        for(int i = 1; i <= 5; i++){
            cout<< "Enter your mark of subject "<<i<<"(out of 100): ";
            cin >> new_mark;
            mark = mark + new_mark;
            }
        percentage = mark / 5;
        if (percentage>=90)
            grade = 'A';
        else if(percentage>=80)
            grade = 'B';
        else if(percentage>=70)
            grade = 'C';
        else if(percentage>=60)
            grade = 'D';
        else if(percentage>=40)
            grade = 'E';
        else
            grade = 'F';
        cout << "\nYour total mark is: "<<mark<<"\nPercentage is: %"<<percentage<<"\nGrade is: "<<grade;



}

