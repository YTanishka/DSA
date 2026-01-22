#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isProduct(vector<int> &arr, long long target)
{
    // Your code here
    // mid: last index of negative number
    sort(arr.begin(), arr.end());
    int mid = -1, n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            mid = i;
        }
        else
        {
            break;
        }
    }

    if (target >= 0)
    {
        // Both numbers should lie in negative region
        int start = 0, end = mid;
        while (start < end)
        {
            if (arr[start] * arr[end] == target)
            {
                return 1;
            }
            else if (arr[start] * arr[end] < target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }

        // Both numbers should lie in positive region
        start = mid + 1, end = n - 1;
        while (start < end)
        {
            if (arr[start] * arr[end] == target)
            {
                return 1;
            }
            else if (arr[start] * arr[end] < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    else
    {
        // One number should lie in -ve region, another in positive
        int start = 0, end = mid + 1;
        while (start <= mid && end < n)
        {
            if (arr[start] * arr[end] == target)
            {
                return true;
            }
            else if (arr[start] * arr[end] > target)
            {
                end++;
            }
            else
            {
                start++;
            }
        }
    }

    return false;
}

int main()
{
    // Test case 1
    vector<int> arr1 = {-5, -3, 2, 4, 6};
    long long target1 = 12;
    cout << "Test 1: " << (isProduct(arr1, target1) ? "True" : "False") << endl;

    // Test case 2
    vector<int> arr2 = {-2, -1, 3, 5};
    long long target2 = -6;
    cout << "Test 2: " << (isProduct(arr2, target2) ? "True" : "False") << endl;

    // Test case 3
    vector<int> arr3 = {1, 2, 3, 4};
    long long target3 = 10;
    cout << "Test 3: " << (isProduct(arr3, target3) ? "True" : "False") << endl;

    return 0;
}