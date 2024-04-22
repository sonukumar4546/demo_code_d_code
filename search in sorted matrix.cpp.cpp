#include <iostream>
using namespace std;

int main()

{
    int A[3][3]={ {1,2,3},{4,5,6},{7,8,9}};

    int x=9;

    int flag =0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
         {
            if(A[i][j]==x)

            {
              flag=1;

                cout<<"the required is found at " <<i<<"  and "<<j<<"palce "<<endl;

            }
         }
    }

    if(flag==0)
    {
   cout<<"nhi h hai array me , kyu dhund rha be "<<endl;


    }

    return 0;

}