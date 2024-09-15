#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin>> marks;
   /// nested if else 
    if(marks>=90)
    {
        cout<<"he got grade A+";

    }
    else if(marks >=80)
    {
        cout<<"he got grade A";
    }
    else if(marks>=70)
    {
        cout<<"he got grade B+";
    }
    else if(marks>=60)
    {
        cout<<"he got grade B";
    }
    else if(marks>=50)
    {
        cout<<"he got grade C";
    }
    else{
        cout<<"sorry u r fail ";

    }
    
}