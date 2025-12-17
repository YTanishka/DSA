#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    // Code here
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int x = 3;
    int ans = search(arr, n, x);
    cout << ans;
}