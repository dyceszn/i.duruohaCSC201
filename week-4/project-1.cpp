#include <iostream>
using namespace std;

int main()
{
    // Define matrices

    int matrix1[3][3] = {};
    int matrix2[3][3] = {};
    int matrix[3][3] = {};

    // Collecting Inputs for matrix 1 and 2

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << "Enter number for Matrix 1 row " << i + 1 << " column " << j + 1 << endl;
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << "Enter numbers for Matrix 2 row " << i + 1 << " column " << j + 1 << endl;
            cin >> matrix2[i][j];
        }
    }

    // Code block for summing the matrixe

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int value = matrix1[i][j] + matrix2[i][j];
            matrix[i][j] = value;
        }
    }

    // Output resulting matrix

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}