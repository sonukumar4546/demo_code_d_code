




# include <iostream>

using namespace std;

class code
{

    int id;

    public:

    code(int a)
    {                     ///constructor
         id =a;

    }

    code(code &x)
    {               ///constructor 

        id = x.id;

    }
    
    int display()
    {
        return  id;            ///faciliator 


    }

       void setlendth(int l);             ///mutator
       int getlength();          ////    acccesor 

};



int main()
{

    code r1(56);
    code r2(r1);

    cout<<r2.display()<<endl;

}