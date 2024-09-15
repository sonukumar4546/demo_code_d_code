#include<iostream>
using namespace std;

int main()
{
  //  char a;
    int n;
    cin>>n;
  // char b;


    

    for(int i=0;i<n;i++)
    {
      //  a=65;
       // b=65+i-1;

        

        for(int j=0;j<=(i);j++)
        {
           // cout<<a<<" ";
           // a++;
           char ch= 65 + j;
           cout<<ch;


        }

      //  ch=ch 1;


        for(int k=0;k<i;k++)
        {
           // cout<<b<<"  ";
           // b--;
           char ab = 65+i-1-k;
           if(ab>=65)
           {
           cout<<ab;
           }
           //ab--;
        }

        cout<<endl;

    }
}