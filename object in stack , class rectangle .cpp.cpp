



#include <iostream>

using namespace std;


class rectangle

{
  

  public:


    int length;
    int breadth;

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
    rectangle  *p;

    p= &r;

    p->length= 17;
    p->breadth=65;



     cout<<"area of rectangle"<<" "<<p->area()<<endl;
    cout<<"perimeter of a rectangle is "<<" "<<p->perimeter()<<endl;

}