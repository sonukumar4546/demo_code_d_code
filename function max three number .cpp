# include <iostream>
using namespace std;


void   maxin (int x, int y,int z)
{

    if(x>y && x>z)
    {
        cout<<x<<endl;

    }
     else if  ( y>z )
    {
        cout<<y<<endl;

    }
    else
    {
          cout<<z<<endl;
    }

}


int main ()
{
    int  a=265,b=897,c=76,r;
    
    maxin(a,b,c);

    
    cout <<"hello world "<<endl;

    
  return 0;


}