#include <iostream>
using namespace std;

bool canSplit(int nums[], int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += nums[i];
    }

    if (totalSum % 2 != 0)
    {
        return false;
    }

    int leftSum = 0;
    int target = totalSum / 2;

    for (int i = 0; i < n - 1; i++)
    {
        leftSum += nums[i];
        if (leftSum == target)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements separated by space:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (canSplit(nums, n))
    {
        cout << "Yes, split possible.\n";
    }
    else
    {
        cout << "No, split not possible.\n";
    }

    return 0;
}
