
  // pass by address   parameyte  
  


# include <iostream>

using namespace std;


void swap( int *a, int *b)

{


  int temp;

  temp =  *a;

  *a =  *b;

  *b  =   temp;


   cout<<"value of a is "<< a<<endl;



}

int main()

{


    int x,y;


      x =  20;


      y = 65;
    


      swap( &x , &y);



     cout<<x<<endl;
      

      



}