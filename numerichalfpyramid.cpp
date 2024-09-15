#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        //number
       for(int j=0;j<=i;j++)
       {

        cout<<i+j+1;
    
       }

       //space
       for(int k=0;k<n-i;k++)
       {
        cout<<" ";

       }

       cout<<endl;

       
    }
}