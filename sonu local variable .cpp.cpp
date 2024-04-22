


 #include<iostream>

using namespace std;

int g =0;    /////global variable 


void fun()
{

	int a=5;

	g= g+a;          /////local variable .after teh fun end ,no use 

	cout<<"variable inside the void fun"<<g<<endl;
    
	

}


int main()
{
   
   g=15;
   fun();

   g++;

   cout<<g;

}