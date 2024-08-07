#include <iostream>

using namespace std;

void printArray(int arr[10]);
void addTen(int arr[10]);

int main()
{
    // Que 1. Creating 1-D marks array
    // Que 2. Storing 10 reandom value in it

    int marks[10] = {41, 51, 61, 71, 81, 90, 42, 52, 62, 72};
    cout << endl
         << "***** Que 1/2 *****" << endl
         << endl;

    printArray(marks);

    // Que 3. Display 2,4,6 and 8 element of array

    cout << endl
         << "***** Que 3 *****" << endl
         << endl;
    cout << "Second element : " << marks[1] << endl;
    cout << "forth element : " << marks[3] << endl;
    cout << "Sixth element : " << marks[5] << endl;
    cout << "Eightth element : " << marks[7] << endl;

    cout << endl
         << "***** Que 4 *****" << endl
         << endl;

    addTen(marks);

    return 0;
}

void printArray(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// add 10 marks to each of them
void addTen(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[i] + 10;
    }
    printArray(arr);
    cout << endl;

}