#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter the Number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of the Given Number is  : " << fact;
}