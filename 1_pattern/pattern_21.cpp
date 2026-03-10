// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        // Print spaces
        int space = 1;
        while (space < row) {
            cout << " ";
            space++;
        }

        // Print stars
        int col = 1;
        while (col <= n - row + 1) {
            cout << "*";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
