




# include <iostream>

using namespace std;


void swap(int x ,int y)
{

    int temp;

    temp = x;

    x= y;
    

    y  = temp;

    cout<<x<<endl;
    cout<<y<<endl;


}


int main()
{


   int  a,b,c,d,e,f;

   a= 34;
   b=65;

   c=75;


   swap(a,b);



   cout<<"value of a is "<<a<<endl;







}

