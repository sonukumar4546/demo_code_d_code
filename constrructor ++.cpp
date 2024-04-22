








#include <iostream>
using namespace std;

class rectangle

{


    private:


    
    int length;
    int breadth;



  

  public:

  

    rectangle( int l=2 , int b=3)            ///paramaterise constructor 
    {

        setlength(l);
        setbreadth(b);

    }

    rectangle(rectangle &r)
    {

        length = r.length;
        breadth = r.breadth;

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

    rectangle r;    
    rectangle r1(r);       //copy constructor

//   r.setlength(12);
//   r.setbreadth(14);


  

    // cout<<" "<<r.getlength()<<endl;


     cout<<"area of rectangle"<<" "<<r1.area()<<endl;
    cout<<"perimeter of a rectangle is "<<" "<<r1.perimeter()<<endl;

}