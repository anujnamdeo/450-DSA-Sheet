#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    // TAKING INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // SOLUTION
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
            j++;
        }
    }
    // PRINTING OUTPUT
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}