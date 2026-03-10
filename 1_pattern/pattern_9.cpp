// 1         
// 1 2       
// 1 2 3     
// 1 2 3 4   
// 1 2 3 4 5 

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;

    int row = 1 ;
    while (row<=n)
    {
        int col = 1;
        int count = 1;
        while (col<=row)
        {
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}