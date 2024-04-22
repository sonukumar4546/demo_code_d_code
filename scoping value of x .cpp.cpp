



# include <iostream>
using namespace std;

int x=76;         ///global value 

int main()
{
     int x =7;

     {
        int x=53;

        {


            int x=64;

            cout<<x<<endl; ///learn the scope of x 


        }


        cout<<::x<<endl;

     }

}