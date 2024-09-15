#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<=n;i++)
    {

        int a=1;

        for(int j=0;j<n-i;j++)
        {
            cout<<"*";

        }
        if(i==0)
        {
            cout<<"1";

        }
         if(i==n)
         {
            for(int k=0;k<=(2*i);k++)
            {
                if(k%2 == 0)
                {
                   cout<<a;
                   a++;
                }
                if(k%2 !=0)
                {
                    cout<<" ";
                
                }
            }
         }
        
        if(i>0 && i<n)
        {
            for(int k=0;k<=(2*i);k++)
            {
               
                if(k==0)
                {
                    cout<<"1";

                }
                if(k==(2*i))
                {
                    cout<<i+1;
                    
                }
                if(k>0 && k<(2*i))
                {

                    cout<<" ";
                    
                }
             }
        }
        cout<<endl;
    }
}