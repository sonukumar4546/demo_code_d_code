
# include <iostream>
using namespace std;




void  maxim(int x, int  y, int z=0)
{
      

      if( x>y && x>z)
      {

         cout<<x<<endl;


      }
      
      else if( y>z)
      {

           cout<<y<<endl;
        
      }
      else 
      {

         cout<<z<<endl;
      }


}


int main()
{

  int a,b,c,d,e,f,g;

  a =43;
  b =6754;
  c= 64995;
  d =64;
  e =85;



   maxim(a,b);
   maxim(c,d,e);




}