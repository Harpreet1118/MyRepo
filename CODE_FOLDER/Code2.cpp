#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // Input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare matrices
    int matrix1[10][10], matrix2[10][10], sumMatrix[10][10];

    // Input elements of the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the resulting sum matrix
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}