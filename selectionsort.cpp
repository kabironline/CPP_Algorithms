#include <iostream>

using namespace std;

void selectionSort(int[], int);
void printArr(int[], int, int, int);
int main()
{
    cout << "\n\n";
    int arr1[11] = {12, 6, 9, 4, 22, 7, 3, 8, 1, 5, 11};
    int arr2[6] = {25, 15, 4, 103, 62, 9};
    int arr3[6] = {16, 23, 13, 9, 7, 5};
    selectionSort(arr1, 6);
    selectionSort(arr2, 5);
    selectionSort(arr3, 7);
    return 0;
}
void selectionSort(int arr[], int len)
{
    int pass = 1;
    int temp = 0;
    int minPos = 0;
    cout << "Orignal Array: ";
    printArr(arr, len, 0, 0);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minPos])
            {
                minPos = j;
            }
        }
        temp = arr[minPos];
        arr[minPos] = arr[i];
        arr[i] = temp;
        cout << "Pass " << pass << ": " << endl;
        pass++;
        printArr(arr, len, arr[minPos], arr[i]);
    }
    cout << "\n\n";
}
void printArr(int arr[], int len, int a, int b)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    if (a == 0; b == 0)
    {
    }
    else if (a != b)
    {
        cout << " >> swapped " << a << " with " << b;
    }
    else
    {
        cout << " >> no item of the array was swapped";
    }

    cout << endl;
}