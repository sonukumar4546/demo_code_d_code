








# include <iostream>
using namespace std;


int main()
{
    int   a[10][12],b[56][85], mult[10][52],r1,r2,c1,c2,i,j,k;
    
    
    
    
    cout<<"enter the number of rows and column :";
    cin>>r1>>c1;
    
    
   cout<<"enter the number of rows and column :";
    cin>>r2>>c2;
    
    if(c1!=r2)
    {
        cout<< "multiply  cannot be done" <<endl;
        
    }
     
     cout<<endl<<"enter the element of matric 1"<<endl;
     
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           cout<<"enter element a "<<i + 1<<j+1<<" : ";
           cin >> a[i][j];
           
        }
    }
     
      cout<<endl<<"enter the element of matric 2"<<endl;
        
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
           cout<<"enter element b "<<i + 1<<j+1<<" : ";
           cin>>b[i][j];
           
        }
    }
       cout << "multiply of  matrix a and matrix b ";
      for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            
          mult[i][j]= 0;
          for(int k =0;k<c2;k++)
          {
              mult[i][j] += a[i][k] * b[k][j];
              
          }
           
           
           
    
        }
        
        
    }   
    
    
    
         cout << " output  matrix:  "<<endl;
         
      for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            
          
        cout<<"  "<<mult[i][j];
        
        }
        
        cout<<endl;
        
    }   
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}