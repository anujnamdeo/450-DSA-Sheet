#include <iostream>
#include <cmath>
using namespace std;

int BinarySearch(int key, int arr[], int n)
{ // start, end and mid all represents indices of array
    int start = 0;
    int end = n - 1;
    int mid, count = 0;

    while (start < end)
    {
        mid = ceil((start + end) / 2);
        if (key == arr[mid])
        {
            count = 1;
            break;
        }
        else if (key < arr[mid])
            end = mid;
        else if (key > arr[mid])
            start = mid;
    }
    return count;
}
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    // TAKING INPUT
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // SOLUTION
    // Union: (print number of elements in union)
    int c[n + m];
    for (int i = 0; i < (m + n); i++)
    {
        c[i] = 0;
    }
    int j = 0;
    int ansa = 0, ansb = 0;
    for (int i = 0; i < m; i++)
    {
        ansa = BinarySearch(a[i], c, m + n);
        if (ansa != 1)
        {
            c[j] = a[i];
            j++;
        }
        ansa = 0;
    }
    for (int i = 0; i < n; i++)
    {
        ansb = BinarySearch(b[i], c, m + n);
        if (ansb != 1)
        {
            c[j] = b[i];
            j++;
        }
        ansb = 0;
    }
    for (int i = 0; i < (m + n); i++)
    {
        cout << c[i] << " ";
    }
}