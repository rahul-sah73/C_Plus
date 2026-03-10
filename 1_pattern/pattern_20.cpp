// * * * * * 
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;

     int row = 1;
     int i = n ;
    while (row<=n)
    {
        int col = 1 ;
     while (col<=i)
     {
        cout<<"*"<<" ";
        
        col++;

     }
     cout<<endl;
     row++;
     i--;
     
    }
    

}