#include<iostream>
using namespace std;
int main()
{
   
    int a=4;
    int b=8;
    int c;
  int d;
   int e;

      
    c= (b++) + (++a);// 8+ 5=13
       //cout<<b<<endl; ///9
      // cout<<a<<endl;  ///5
        d= (b++) - (++a);  //9-6=3  
        //b=10;
        //a=6;

      e= (b++) * (++a);    ///10*7=70
       //c= b++ + ++a;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;

    return 0;
}