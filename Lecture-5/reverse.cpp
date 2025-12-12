#include <iostream>
using namespace std;
int main()
{
    int num = 23154;
    int ans = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        ans = ans * 10 + lastDigit;
    }
    cout << ans;
}