#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    char num = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}