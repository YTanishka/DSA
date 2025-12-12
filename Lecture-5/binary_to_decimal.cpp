#include <iostream>
using namespace std;
int main()
{
    int num, ans = 0, mul = 1;
    cout << "Enter the Number : ";
    cin >> num;
    while (num != 0)
    {
        int rem = num % 10;
        num = num / 10;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout << " Decimal of the Given Number is : " << ans;
}