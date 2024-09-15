
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=2*i;k++)
        {
            if(k==0 || k==2*i)
            {
                cout<<"*";
            }
            else{
              
              
                    cout<<" ";
                
            }
            

        }
        cout<<endl;

    }


      for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";

        }
        for(int k=0;k<=2*(n-i);k++)
        {
            if(k==0 || k==2*(n-i) )
            {
                cout<<"*";

            }
            else{
                cout<<" ";

            }
        }
        cout<<endl;

    }
}