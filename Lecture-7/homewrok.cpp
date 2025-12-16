#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {70, 80, 40, 30, 20};
    int low = marks[0];
    int index = 0;

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] < low)
        {
            low = marks[i];
            index = i;
        }
    }

    cout << "Lowest Marks : " << low << " On the Index of : " << index << endl;
}