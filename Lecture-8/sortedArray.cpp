#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int arr1[] = {90, 80, 100, 70, 40, 30};
    int size = 5;

    if (isSorted(arr, size))
        cout << "Array is Sorted" << endl;
    else
        cout << "Array is Not Sorted" << endl;

    return 0;
}