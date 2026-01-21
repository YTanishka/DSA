#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> EqualSum(vector<int> arr)
    {
        int n = arr.size();

        // Step 1: Total sum calculate karo
        int totalSum = 0;
        for (int i = 0; i < n; i++)
        {
            totalSum += arr[i];
        }

        // Result store karne ke liye
        vector<int> ans(3);
        ans[0] = INT_MAX; // min_x
        ans[1] = -1;      // position (1-indexed)
        ans[2] = -1;      // flag (1 or 2)

        // Step 2: Har position pe try karo
        int leftSum = 0;

        for (int i = 0; i < n; i++)
        {
            int rightSum = totalSum - leftSum;

            int x;
            int flag;

            if (rightSum > leftSum)
            {
                // Right bada hai, x ko LEFT mein add karo
                x = rightSum - leftSum;
                flag = 1;
            }
            else
            {
                // Left bada hai, x ko RIGHT mein add karo
                x = leftSum - rightSum;
                flag = 2;
            }

            // Check and update answer
            if (x < ans[0])
            {
                ans[0] = x;
                ans[1] = i + 1; // 1-indexed position
                ans[2] = flag;
            }

            // Next iteration ke liye left sum update karo
            leftSum += arr[i];
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {3, 2, 1, 5, 7, 8};

    vector<int> result = sol.EqualSum(arr);

    cout << "Minimum x: " << result[0] << endl;
    cout << "Position: " << result[1] << endl;
    cout << "Flag: " << result[2] << endl;

    return 0;
}
