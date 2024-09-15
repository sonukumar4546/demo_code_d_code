#include<iostream>
using namespace std;

int  checkprime(int n)
{
       int count =0;
    for(int i=1;i<=n;i++)
    {
     
        if(n%i==0)
        {
          count++;
        }    
    }

    return count;

}

int main()
{
    int n;
    cin>>n;

   int count= checkprime(n);
   if(count==2)
   {
    cout<<"it's a prime number "<<endl;
   }
   else
   {
    cout<<"it's not a prime number "<<endl;
   }
   
   
}