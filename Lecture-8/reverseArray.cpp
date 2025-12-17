#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 3, 2, 6, 5 };
    int size = 6;

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<endl;
    }
}