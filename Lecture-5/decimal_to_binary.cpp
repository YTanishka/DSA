#include <iostream>
using namespace std;
int main()
{
    int num, ans = 0, mul = 1;
    cout << "Enter the Number : ";
    cin >> num;
    while (num != 0)
    {
        int rem = num % 2;
        num = num / 2;
        ans = ans + rem * mul;
        mul = mul * 10;
    }
    cout << "Binary of the Given Number is : "<< ans;
}