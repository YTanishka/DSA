#include <bits/stdc++.h>
using namespace std;

// Binary search based solution
int findKthPositive(vector<int> &arr, int k)
{
    int start = 0, end = arr.size() - 1;
    int ans = arr.size();

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // missing count up to arr[mid]
        int missing = arr[mid] - (mid + 1);

        if (missing < k)
        {
            // we need more missing numbers, go right
            start = mid + 1;
        }
        else
        {
            // possible correct position, go left
            ans = mid;
            end = mid - 1;
        }
    }

    return ans + k;
}

int main()
{
    // Example test case
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "The " << k << "th missing positive integer is: "
         << findKthPositive(arr, k) << "\n";

    // Another test
    vector<int> arr2 = {1, 2, 3, 4};
    int k2 = 2;
    cout << "The " << k2 << "th missing positive integer is: "
         << findKthPositive(arr2, k2) << "\n";

    return 0;
}
