

#include <iostream>
using namespace std;

class rectangle

{


    private:


    
    int length;
    int breadth;



  

  public:

   rectangle()              // constructor cannot have return type.  because this function have name 
                            // as class name . 
   {

      length =1;
      breadth = 2;


   }




   void setlength( int l)
   {
        if(l>0){
            length =l;

        }
        else {
            length =0;

        }

   }


    void setbreadth( int b)
   {
        if(b>0){
            breadth= b;

        }
        else {
            breadth = 0;
            
        }

   }



   int getlength()
   {

    return length;

   }

   int getbreadth()
   {

    return breadth;

   }



    int area() 
    {

        return length*breadth;

    }

    int perimeter()
    {
        return 2*(length+breadth);

    }


};

int main()
{

    rectangle r;     //default constructor willno be called , our constructor will be called ,which is not taking argument

  

//   r.setlength(12);
//   r.setbreadth(14);


  

    // cout<<" "<<r.getlength()<<endl;


     cout<<"area of rectangle"<<" "<<r.area()<<endl;
    cout<<"perimeter of a rectangle is "<<" "<<r.perimeter()<<endl;

}