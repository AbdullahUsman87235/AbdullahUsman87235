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

// Adaptive Best case O(n)

void bubble_sort(int *arr, int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        bool isSorted = true;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSorted = false;
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
            if (isSorted)
            {
                return;
            }
        }
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

    bubble_sort(arr, size);

    cout << "Array Before Sorting is: ";
    display_array(arr, size);

    delete[] arr;

    return 0;
}