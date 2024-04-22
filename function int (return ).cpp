



#include <iostream>

using namespace std;

int  maxin(int a,int b,int c )
{
   
   if (a>b && a>c)
      
      return a;


   else if(b>c)

   return b;

   else

   return c;

}




int main()
{
     int a=510;
    int b=34564.3;
    int c=897;
    int  r;



       r  =  maxin(a,b,c);
       cout<<r<<endl;

}