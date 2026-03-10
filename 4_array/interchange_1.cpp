#include<iostream>
using namespace std;
void swapalternate (int arr[] , int size ){
for (int i = 0 ; i < size / 2 ; i++){
    swap(arr[i] , arr[ size - 1 - i]);
}
}
void printarray(int arr[] , int size ){

    for ( int i = 0 ; i < size ;i++ ){
        cout << " " << arr[i] << " " ; 
    }

    cout<< endl ;
}

int main(){

    int evenarray[10] = {1 , 2 , 3, 4 , 5 , 6 , 7, 8 , 9 ,10};
    int oddarray[9] ={ 10 , 20  , 30 , 40 , 50 , 60 , 70 , 80 , 90 };

    swapalternate(evenarray , 10 ) ;
    swapalternate( oddarray , 9 ) ;
     
    printarray(evenarray , 10 ) ;
    printarray(oddarray , 9 ) ;

    return 0;

}
