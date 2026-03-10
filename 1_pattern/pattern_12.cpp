// ABCD
// ABCD
// ABCD
// ABCD

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        char ch=65;
        int col = 1;
        while (col <=n )
        {
            cout<<ch<<"";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}