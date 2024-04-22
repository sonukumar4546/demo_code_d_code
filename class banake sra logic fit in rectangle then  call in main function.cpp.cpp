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

    rectangle r1;

    r1.length=15;
    r1.breadth=54;

    cout<<"area of rectangle"<<" "<<r1.area()<<endl;
    cout<<"perimeter of a rectangle is "<<" "<<r1.perimeter()<<endl;

}