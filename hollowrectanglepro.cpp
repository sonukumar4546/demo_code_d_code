#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=0;row<=n;row++)
    {
        if(row==0 || row==n)
        {
            for(int col=0;col<=n;col++)
            {
                cout<<" * ";
            }
           cout<<endl;

        }
        else
        {
           //for remaining rows
           if(row>0 && row<n)
           {
              for(int col=0; col<=n; col++)
              {
                if(col == 0 || col==n)
                {
                    cout<<" * ";
                }
                else
                {
                    cout<<"   ";
                }
              }
           }
           cout<<endl;
        }
        
    }
}