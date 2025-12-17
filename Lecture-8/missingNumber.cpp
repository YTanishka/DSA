#include <iostream>
using namespace std;

int missingNum(int a[], int size)
{
    // code here

    int sum = 0;
    long long n = size + 1;

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    //  sum = 11

    //  sum of first n natural number
    n = n * (n + 1) / 2;
    // n = 15

    return n - sum;
}

int main()
{
    int arr[] = {8, 2, 4, 5, 3, 7, 1};
    int size = 7;
    int ans = missingNum(arr, size);
    cout << "Missing Number was : " << ans;
}