#include <iostream>

using namespace std;

void bubbleSort(int[], int);
void printArr(int[], int);
int main()
{
    cout << "\n\n";
    int arr1[6] = {6, 5, 9, 2, 8, 1};
    int arr2[5] = {55, 43, 5, 6, 9};
    int arr3[7] = {19, 2, 27, 3, 7, 5, 31};
    bubbleSort(arr1, 6);
    bubbleSort(arr2, 5);
    bubbleSort(arr3, 7);
    return 0;
}
void bubbleSort(int arr[], int len)
{
    int pass = 0;
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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