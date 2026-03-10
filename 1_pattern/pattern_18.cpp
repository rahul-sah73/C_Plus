// D 
// C D
// B C D
// A B C D 

#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;

   int row = 1;
   while (row<=n)
   {
    int col = 1 ;
    int i = n ;
    char ch = 64 + i ;
    while (col<=row)
    {
        cout<<ch<<" ";
        col++;
        ch--;
    }
    
        
    cout<<endl;
    row++;
    i--;
   }
   

}