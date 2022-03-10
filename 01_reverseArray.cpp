#include <iostream>
using namespace std;

int main()
{
    cout << "Input array size and elements" << endl;
    int n;
    cin>>n;
    int array[n];
    // TAKING INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // REVERSING ARRAY
    int count = n / 2;
    for (int i = 0; i < count; i++)
    {
        int temp = array[i];
        array[i] = array[(n-1) - i];
        array[(n-1) - i] = temp;
    }
    // PRINTING OUTPUT
    for (int i = 0; i < n; i++)
    {
        cout << array[i]<<" ";
    }
}