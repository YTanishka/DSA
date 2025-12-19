#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr)
{
    int n = arr.size();

    // store the last number in temp variable
    int temp = arr[n - 1];

    // n-2 to 0, shift them one position to right
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    // 0 index wale pe temp wale ko daal do
    arr[0] = temp;
}

// Function to print array
void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Test the rotate function
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    printArray(arr);

    rotate(arr);

    cout << "After rotation: ";
    printArray(arr);

    // Another test
    vector<int> arr2 = {10, 20, 30, 40};
    cout << "\nOriginal array: ";
    printArray(arr2);

    rotate(arr2);
    cout << "After rotation: ";
    printArray(arr2);

    return 0;
}