#include<iostream>
using namespace std;

bool oddeven(int num){

    if( num % 2 == 0){  // num % 2 == 0   or
                         //   num & 1  if this one then exchange return value 
        return 1;
    }
    else {
        return 0;
    }

}

int main (){

    int a ;
    cin >> a ;

   if (oddeven(a))
   {
    cout << "Your Number is Even" << endl ;
   }
   else {
    cout << " Your Number is Odd" << endl ;
   }
   


}