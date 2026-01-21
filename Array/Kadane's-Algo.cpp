#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool allocateBook(int maxPages, vector<int> &arr, int k)
{
    // count: number of students, pages: pages allocated to current student
    int count = 1, pages = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        pages += arr[i];
        if (pages > maxPages)
        {
            count++;
            pages = arr[i];
        }
    }
    return count <= k;
}

int findPages(vector<int> &arr, int k)
{
    int n = arr.size();

    if (k > n)
    {
        return -1;
    }

    // start will be the maximum element (minimum possible answer)
    // end will be the sum of all elements (maximum possible answer)
    int start = 0;
    int end = 0, ans = -1;

    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // If we can allocate books with 'mid' as maximum pages per student
        if (allocateBook(mid, arr, k))
        {
            ans = mid;
            end = mid - 1; // Try for smaller maximum pages
        }
        else
        {
            start = mid + 1; // Need to increase maximum pages
        }
    }

    return ans;
}

// Main function with test cases
int main()
{
    // Test case 1
    vector<int> arr1 = {12, 34, 67, 90};
    int k1 = 2;
    cout << "Test Case 1:" << endl;
    cout << "Books with pages: ";
    for (int num : arr1)
        cout << num << " ";
    cout << "\nNumber of students: " << k1 << endl;
    cout << "Minimum possible maximum pages: " << findPages(arr1, k1) << endl;
    cout << endl;

    // Test case 2
    vector<int> arr2 = {10, 20, 30, 40};
    int k2 = 3;
    cout << "Test Case 2:" << endl;
    cout << "Books with pages: ";
    for (int num : arr2)
        cout << num << " ";
    cout << "\nNumber of students: " << k2 << endl;
    cout << "Minimum possible maximum pages: " << findPages(arr2, k2) << endl;
    cout << endl;

    // Test case 3 - More students than books
    vector<int> arr3 = {15, 17, 20};
    int k3 = 5;
    cout << "Test Case 3:" << endl;
    cout << "Books with pages: ";
    for (int num : arr3)
        cout << num << " ";
    cout << "\nNumber of students: " << k3 << endl;
    cout << "Result: " << findPages(arr3, k3) << endl;
    cout << endl;

    // Test case 4 - Single student
    vector<int> arr4 = {25, 46, 28, 49, 24};
    int k4 = 1;
    cout << "Test Case 4:" << endl;
    cout << "Books with pages: ";
    for (int num : arr4)
        cout << num << " ";
    cout << "\nNumber of students: " << k4 << endl;
    cout << "Minimum possible maximum pages: " << findPages(arr4, k4) << endl;

    return 0;
}