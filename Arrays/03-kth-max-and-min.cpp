#include <iostream>
using namespace std;

int main()
{
    cout << "Input array size and elements" << endl;
    int n, k;
    cin >> n;
    int array[n];
    // TAKING INPUT
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // SOLUTION
    int count=0;
    int k_min = array[0];
    int k_max = array[0];

    for (int i = 0; i < n; i++)
    {
        if (k_min > array[i])
        {
            count++;
        }
    }
    if (count == (k - 1))
    {
        cout << k << "th min element is ";
    }
}