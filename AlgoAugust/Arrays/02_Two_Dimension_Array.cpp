#include <iostream>

using namespace std;

void printArray(int arr[3][3]);
void subFive(int arr[3][3]);

int main()
{
    // Two Dimension Array

    // Que 5. Craeting 2-D matrix array of 3X3 ( 3 rows and 3 Columns)
    // Que 6. Stoeing value in it

    int matrix[3][3] = {{21, 22, 23}, {24, 25, 26}, {27, 28, 29}};

    cout << endl
         << "***** Que 5/6 *****" << endl
         << endl;

    printArray(matrix);

    // Que 7. Displaying alternative elements

    cout << endl
         << "***** Que 7 *****" << endl
         << endl;

    cout << "For Figure 1" << endl;

    cout << "   " << matrix[0][1] << "  " << endl;
    cout << matrix[1][0] << "    " << matrix[1][2] << endl;
    cout << "   " << matrix[2][1] << "  " << endl;

    cout << endl
         << "For Figure 2" << endl;
    cout << matrix[0][1] << "   " << matrix[0][2] << endl;
    cout << "  " << matrix[1][1] << "  " << endl;
    cout << matrix[2][0] << "   " << matrix[2][2] << endl
         << endl;

    // Que 8. Subtracting 5 from each element

    cout << endl
         << "***** Que 8 *****" << endl
         << endl;

    subFive(matrix);

    return 0;
}

void printArray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;
}

void subFive(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] -= 5;
        }
    }

    printArray(arr);
}