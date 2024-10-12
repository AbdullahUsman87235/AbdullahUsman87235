#include <iostream>
using namespace std;

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Input Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

// adaptive

void selection_sort(int *arr, int size)
{
    int min_index, temp;
    bool isSorted;

    cout << "Selection Sort Running...\n";

    for (int i = 0; i < size - 1; i++)
    {
        min_index = i;
        isSorted = true;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
                isSorted = false;
            }
        }
        if (isSorted)
        {
            return;
        }
        else
        {
            temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int array[10];
    input_array(array, 10);
    cout << "Before Sorting: \n";
    print_array(array, 10);
    selection_sort(array, 10);
    print_array(array, 10);
    return 0;
}