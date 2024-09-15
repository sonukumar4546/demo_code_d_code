#include <iostream>
using namespace std;

int main()
{
    int a =-3;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        
        cout<<i<<" "<<a<<endl;
        a=a<<1;

    }
}