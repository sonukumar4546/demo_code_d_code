#include<iostream>
using namespace std;

int main()
{
   // cout<<"i love u ";

    int a;
    int b;
    int c;
    int d;


    a=false;
    b=true;
    c=true;
    d=false;
    int e=5;


    cout<<a && b;  //0
    cout<<endl;

    cout<<(c || d);  //1
    cout<<endl;
     cout<< (c^d);   //1
      cout<<endl;
     cout<< (a^d);   //0

    cout<<endl;
    cout<<(7&6)<<endl;  //6
    cout<<(2&6)<<endl;  //2
    cout<<(7|6)<<endl;  //7
    cout<<(2|3)<<endl;  //3
    cout<<(2|6)<<endl;  //6
    cout<<(5&10)<<endl;  //0
    cout<<(~a)<<endl;   //-1
    cout<<(~e)<<endl;    ///-6
    int g=e<<1;
    cout<<g<<endl;       //10
    int h=g<<2;
    cout<<h<<endl;   //40 
    int i=h>>1;
    cout<<i<<endl;   ///20
    int j= 15;
     int z= j>>1;
    cout<<z<<endl;   //7
    int v=-19;
   int x= v<<1;
    cout<<x;  //-38
    cout<<endl;
     int u=100;
   int t= u<<3;
    cout<<t;   //800
        cout<<endl;
    int q =-5;
    int k=q>>1;
    cout<<k;












    



}