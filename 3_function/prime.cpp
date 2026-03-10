#include<iostream>
using namespace std;

bool isprime( int num ){
       
    for(int i = 2 ; i < num ; i++){
        if (num % i == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
}     


int main(){

    int n ;
    cin >> n ;

    if(isprime(n)){
        cout << "Your Number is Prime" << endl;
    }
    else {
        cout << "Your Number is not Prime" << endl;
    }
}