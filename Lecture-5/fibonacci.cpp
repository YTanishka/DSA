#include <iostream>
using namespace std;
int main(){
    int num , first =0, second=1;
    cout << "Enter the Number : ";
    cin >> num;
    if(num==1)
    return 0;
    if(num==2)
    return 1;

    for (int i = 3; i <= num; i++)
    {
        int count  = first+second;
        first = second;
        second = count;
    }
    cout<<second;
    
}