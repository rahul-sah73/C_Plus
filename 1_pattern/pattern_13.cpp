// A B C 
// D E F 
// G H I

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
     
    char ch = 65;
    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col <= n)
        {
           cout<<ch<<" ";
           ch++;
           col++;
        }
        cout<<endl;
        row++;
    }
    
} 
