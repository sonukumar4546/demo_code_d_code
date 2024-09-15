#include<iostream>
using namespace std;

int main(){
   
    char c= 62;
    cout<<c<<endl;
   // return 0;
    int a = 'g';
    cout<<a<<endl;   //implicit conversion 
    cout<<"size of a:"<<sizeof(a)<<endl;
    cout<<"size of c:"<<sizeof(c)<<endl;
    bool d;
    short e;
    double f;
    long  j;
    cout<<"size of d:"<< sizeof(d)<<endl;
    cout<<"size of e:"<<sizeof(e)<<endl;
    cout<<"size of f:"<<sizeof(f)<<endl;
    cout<<"size of j:"<<sizeof(j)<<endl;
    long long k;
    cout<<"size of k:"<<sizeof(k)<<endl;
    float l;
    cout<<"size of l:"<<sizeof(l)<<endl;
    int p = 10.88;
    cout<<p<<endl;
   
     float v = 79.04;
     cout<<(int)v + 2<<endl;  //explicit conversion 
     int y= v;
     cout<<y<<endl;

    return 0;

}   