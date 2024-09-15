
#include<iostream>

using namespace std;

int main()
{
       
    
       int n;
       cin>>n;
      ///uper part
       for(int i=0;i<=n;i++)
       {
          for(int j=0;j<=n-i;j++)
          {
            cout<<" * ";
            
          }

          for(int K=0;K<i;K++)
          {
            cout<<"   ";
            
          }
          for(int L=0;L<i;L++)
          {
            cout<<"   ";
            
          }
          for(int M=0;M<=n-i;M++)
          {
            cout<<" * ";
            
          }
           
           cout<<endl;

       }

       //lower part

        for(int i=0;i<=n;i++)
       {  
        //star
          for(int j=0;j<=i;j++)
          {
            cout<<" * ";
            
          }
          //space 
          for(int K=0;K<n-i;K++)
          {
            cout<<"   ";
            
          }
          //space 

          for(int L=0;L<n-i;L++)
          {
            cout<<"   ";
            
          }
          for(int M=0;M<=i;M++)
          {
            cout<<" * ";
            
          }
           
           cout<<endl;

       }
}