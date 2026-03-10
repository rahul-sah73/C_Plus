#include<iostream>
using namespace std;

// void input_array(int array[]) {
//     for (int i = 0; i < 10; i++) {
//         cin >> array[i];                          // -----> this is for custom  input 
//     }

    
//     for (int i = 0; i < 10; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }


void  max_num(int array[]){

 int max = INT_MIN;

 for(int i = 0 ; i < 10 ; i++ ){

       if (array[i] > max ){
        max = array[i] ;
       }

 }

 cout << max << endl ;

}

void  min_num(int array[]){

 int min = INT_MAX;

 for(int i = 0 ; i < 10 ; i++ ){

       if (array[i] < min ){
        min = array[i] ;
       }

 }

 cout << min << endl ;

}


int main(){

int arr1[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7, 8 , 9 ,110 } ;
int arr2[10] = { 0 , -5 , 12 , 45 ,53 , -110 , 5 , 6 ,7 , 10 };

// input_array(arr1);
// input_array(arr2);

max_num(arr1);
min_num(arr2);


return 0;
}