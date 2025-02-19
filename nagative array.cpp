#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input elements into the 2D array
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Input the row and column to sum
    int rowNum, colNum;

    cout << "Enter the row number to find sum (0 to " << rows - 1 << "): ";
    cin >> rowNum;
    cout << "Enter the column number to find sum (0 to " << cols - 1 << "): ";
    cin >> colNum;

    // Calculate sum of the chosen row
    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
        rowSum += matrix[rowNum][j];
    }

    // Calculate sum of the chosen column
    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        colSum += matrix[i][colNum];
    }

    // Display results
    cout << "Sum of row " << rowNum << " is: " << rowSum << endl;
    cout << "Sum of column " << colNum << " is: " << colSum << endl;

    return 0;
}

