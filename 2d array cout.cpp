





# include  <iostream>
using namespace std;

int main()
{
    

    int A[2][3];
    
    
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<4;j++)
        {
            
            
            cout<<"element at index "<<i<<j<<endl;
            cin>>A[i][j];
        }
    }
    
    cout<<"elements of the  2 D array is "<<endl;
    
    
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<4;j++)
        {
        
          cout<<A[i][j]<<" ";
          
          
        
        }
        cout<<endl;
        
    }
    
    
    
    
    
    
    return 0;
    
    
    
    
    
    
    
    
}