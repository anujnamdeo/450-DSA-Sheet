#include <iostream>
using namespace std;
int main()
{
    // TAKING INPUT
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // SOLUTION
    int temp;
    temp = array[n - 1];
    for (int i = 0; i < n-1; i++)
    {
        array[(n-1)-i] = array[(n-2)-i];
    }
    array[0] = temp;
    // PRINTING OUTPUT
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}