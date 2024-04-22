


# include <iostream>

using namespace std;



int v=0;        ///global var access by both fun and valure change  by both .




void fun()
{

    int a =5;
    

    v++;

    cout<<v<<"  "<<a<<endl;



}

int main()
{

    fun();

    fun();

    fun();

}