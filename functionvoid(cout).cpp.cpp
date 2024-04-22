



#include <iostream>

using namespace std;

void maxin(int a,int b,int c )
{
   
   if (a>b && a>c)
   {
     cout<<a<<endl;

   }

   else if(b>c)
   {
     cout<<b<<endl;
   }
   else {
     cout<<c<<endl;
   }
}




int main()
{
     int a=36156510;
    int b=34;
    int c=897;


    maxin(a,b,c);

}