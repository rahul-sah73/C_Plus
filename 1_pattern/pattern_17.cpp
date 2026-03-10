// A 
// B C
// C D E 
// D E F G 
#include<iostream>
using namespace std;
int main(){

    int n ;
    cin>>n ;

    int row = 1 ;
    
    while (row<=n)
    {
        char ch = 64 + row ;
        int col = 1;
        while (col<=row)
        {
            cout<<ch<<" ";
            col++;
            ch++;
        }
        

        cout<<endl;
        row++;
    }
    
}
