#include<iostream>

using namespace std;

int main()
{


    int n;
    cin>>n;

    for(int i=0;i<=n;i++)
    {

        //star
         for(int j=0;j<=i;j++)
         {
            cout<<"*";
         }
         
         //space
         for(int k=0;k<n-i;k++)
         {
            cout<<" ";
         }
          

          
         //space
         for(int l=0;l<n-i;l++)
         {
            cout<<" ";
         }
         //stR
         for(int m=0;m<=i;m++)
         {
            cout<<"*";
         }

         cout<<endl;


    }


    
    for(int i=0;i<=n;i++)
    {

        //star
         for(int j=0;j<=n-i;j++)
         {
            cout<<"*";
         }
         
         //space
         for(int k=0;k<i;k++)
         {
            cout<<" ";
         }
          

          
         //space
         for(int l=0;l<i;l++)
         {
            cout<<" ";
         }

         
         //stR

         for(int m=0;m<=n-i;m++)
         {
            cout<<"*";

         }
         
         cout<<endl;
    }


      
}