#include<iostream>
using namespace std;

void uniquenum( int arr[] , int size ){
   
    int unique = 0;
       for( int i = 0 ; i < size ; i++  ){
         
         unique = unique ^ i ;

       }

       cout << endl << unique << endl ;
         
}

int main() {

    int array[7] ={ 1 , 2 , 4 , 1 , 2 ,  4 , 7 };

    uniquenum(array , 7);

}