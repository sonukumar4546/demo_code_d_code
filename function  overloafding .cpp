

// function overloading    adda kaa   

#include <iostream>
using namespace std ;



void   add(int a, int b, int c ) 
{

    int r = a + b + c;

    cout<< r <<endl;


} 

void  add ( int a, int b )

{
    int r = a + b ;

    cout << r << endl ;

}


void  add ( float  i, float  j )

{
  float r = i + j  ;

    cout << r << endl ;

}



int main ()
{
   int  a,b,c,d ;
   int e = 75;
   d =67;

   a=120;
   b=98;
   c=65;
    float i=4.8;
    float j = 7.4;


    
    add(a,b);
    add(c,d,e);
    add(i,j);
    add(76548,8759);
    
    
    }

///dil mera tutta hi jae   