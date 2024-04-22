








#  include <iostream>

using namespace  std;


int main()

{
    
    int  A[6];
    
    int sum=0;
    
    for(int i=0;i<6;i++)
    {
        
        cout<<"elenent at index"<<i<<"is";
        cin>>A[i];        
    }
    
    cout<<"element of array of index is "<<endl;
    
      
    for(int i=0;i<6;i++)
    {
        
      
      
        cout<<A[i]<<"  ";
        
        
        
        
        
    }
     
     cout<<endl;
     
       
    for(int i=0;i<6;i++)
    {
        
      
      
     sum = sum +A[i];
     
     
     
     
        
        
        
        
    }
    cout<<"sum is"<<sum<<endl;
    
    
    return 0;
    
    
}