#include <iostream>
using namespace std;

#define MAX 100

int main() {
    int mat[MAX][MAX];
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Input matrix
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    // Sum of each row
    cout << "\nSum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += mat[i][j];
        }
        cout << "Row " << i << ": " << rowSum << endl;
    }

    // Sum of each column
    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += mat[i][j];
        }
        cout << "Column " << j << ": " << colSum << endl;
    }

    return 0;
}
