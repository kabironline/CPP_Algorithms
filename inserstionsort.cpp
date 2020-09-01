#include <iostream>

using namespace std;

void insersetionSort(int[], int);
void printArr(int[], int);
int main()
{
    cout << "\n\n";
    int arr1[8] = {77, 33, 44, 11, 88, 22, 66, 55};
    int arr2[5] = {45, 22, 8, 34, 19};
    int arr3[6] = {57, 89, 64, 56, 77, 33};
    insersetionSort(arr1, 6);
    insersetionSort(arr2, 5);
    insersetionSort(arr3, 7);
    return 0;
}
void insersetionSort(int arr[], int len)
{
    int pass = 1;
    int j = 0;
    int key = 0;
    cout << "Orignal Array: ";
    printArr(arr, len);
    for (int i = 0; i < len; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        cout << "Pass " << pass << ": " << endl;
        pass++;
        printArr(arr, len);
    }
    cout << "\n\n";
}
void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}