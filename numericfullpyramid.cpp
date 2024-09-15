# include<iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {

      // int a =1;
        int ans;

        for(int j=0;j<n-i;j++)
        {
            cout<<" ";

        }

        for(int k=0;k<=(i);k++)
        {
            ans =i+1+k;

            cout<<ans;
            
        }

        ans=ans-1;
        for( ;ans>=i+1;ans--)
        {
            cout<<ans;

        }

        cout<<endl;
    }

}

