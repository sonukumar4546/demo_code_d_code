



# include <iostream>

using namespace std;

class code
{

    int id;

    public:

    code(int a)
    {
         id =a;

    }

    code(code &x)
    {

        id = x.id;

    }
    
    int display()
    {
        return  id;


    }



};



int main()
{

    code r1(56);
    code r2(r1);

    cout<<r2.display()<<endl;

}