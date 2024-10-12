#include <iostream>
using namespace std;

void display_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int *arr, int size)
{
    int j, i;
    for (i = 1; i <= size - 1; i++)
    {
        int key = arr[i];
        for (j = i - 1; j>=0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int size;
    cout << "Input Size of Array: ";
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Input Element no [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    cout << "Array Before Sorting is: ";
    display_array(arr, size);

    insertion_sort(arr, size);

    cout << "Array After Sorting is: ";
    display_array(arr, size);

    delete[] arr;

    return 0;
}