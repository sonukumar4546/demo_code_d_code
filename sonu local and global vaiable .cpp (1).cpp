
#include <iostream>
using namespace std;

int g =5;       ////maii global varible hu mai dono  fun se change  ho jaunga 


void fun()
{
   

   int a = 10;

    a++;

    g++;

    cout<<a<<"  "<<g<<endl;



}


int main()
{
    

    cout<<g<<endl;
    fun();
    g++;

    cout<<g<<endl;
    

}