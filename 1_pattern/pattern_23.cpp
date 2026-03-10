#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int row = 1;
 while (row<=n)
 {
     int i = 1;
    while (i <= n - row + 1)
    {
        cout<<i;
        i++;
    }
int star = row - 1;
while (star)
{
    cout<<"**";
    star--;
}
int start = n - row + 1 ;
while (start)
{
    cout<<start;
    start--;
}



    cout<<endl;
    row++;
 }
 
}
