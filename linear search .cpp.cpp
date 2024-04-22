



# include <iostream>

using namespace std;

int main()

{

       int A[5];
       int size;
       int flag ;
    int key;
     int index;
     
    
      // cout<<"enter the sise of array "<<enndl;
     //  cin>>size>>endl;


       for( int i=0;i<5; i++ )
       {

                                                     
         cout<<"element at index"<<i<<endl;
         cin>>A[i];
       }

       cout<<"element of the array is "<<endl;


          for( int i=0;i<5; i++ )
       {

                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
         
         cout<<A[i]<<" ";




       }

       cout<<"enter key"<<endl;

       cin>>key;


       
     for( int i=0;i<5; i++ )
       {
          if( key == A[i])
          {
              
              flag =1;
            
            cout<<"element found at "<<i<<endl;
            
            
              

          }

       }
    
    
       
    if(flag==0)
    {
   cout<<"nhi h hai array me , kyu dhund rha be "<<endl;
    }


   return 0;


}

       