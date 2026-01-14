// STRIKE PLATFORM QUESTION NO.-20

#include <iostream>
#include <vector>
using namespace std;

int countZeroes(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {1,1,1,0,0,0,0};
    int result = countZeroes(arr);
    cout << "Number of zeroes: " << result << endl;
    return 0;
}
