#include <bits/stdc++.h>
using namespace std;

int trapWater(vector<int> &arr)
{
    int n = arr.size();
    vector<int> RightMax(n, 0);
    RightMax[n - 1] = arr[n - 1];
    int LeftMax = arr[0];

    // Suffix Max (Right to Left)
    for (int i = n - 2; i >= 0; i--)
    {
        RightMax[i] = max(RightMax[i + 1], arr[i]);
    }

    int totalWater = 0;
    // Calculate water
    for (int i = 1; i < n - 1; i++)
    {
        int minLeftRight = min(LeftMax, RightMax[i + 1]);
        if (minLeftRight > arr[i])
        {
            totalWater += minLeftRight - arr[i];
        }
        LeftMax = max(LeftMax, arr[i]);
    }

    return totalWater;
}

int main()
{
    // Test case 1
    vector<int> arr1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Array: ";
    for (int x : arr1)
        cout << x << " ";
    cout << "\nTotal Water Trapped: " << trapWater(arr1) << endl;
    cout << "Expected: 6\n"
         << endl;

    // Test case 2
    vector<int> arr2 = {3, 0, 2, 0, 4};
    cout << "Array: ";
    for (int x : arr2)
        cout << x << " ";
    cout << "\nTotal Water Trapped: " << trapWater(arr2) << endl;
    cout << "Expected: 7\n"
         << endl;

    // Test case 3
    vector<int> arr3 = {4, 2, 0, 3, 2, 5};
    cout << "Array: ";
    for (int x : arr3)
        cout << x << " ";
    cout << "\nTotal Water Trapped: " << trapWater(arr3) << endl;
    cout << "Expected: 9\n"
         << endl;

    return 0;
}


 