// A 
// B C 
// D E F 
// G H I J 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row = 1;
      char ch = 65;
    while (row<=n)
    {
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