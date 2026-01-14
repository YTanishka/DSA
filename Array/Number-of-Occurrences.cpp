// STRIKE PLATFORM QUESTION NO.-12

#include <iostream>
#include <vector>
using namespace std;

int countFreq(vector<int> &arr, int target)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
    int target;

    // user se target input lena
    cout << "Enter number to count: ";
    cin >> target;

    int result = countFreq(arr, target);

    cout << "Frequency of " << target << " is: " << result << endl;

    return 0;
}
