#include <iostream>
using namespace std;

int main()
{
    cout << "Input array size and elements" << endl;
    int n;
    cin >> n;
    int array[n];
    // TAKING INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // // SOLUTION 1 : time=O(n) , space=O(1)
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
            count0++;
        else if (array[i] == 1)
            count1++;
        else
            count2++;
    }
    for (int i = 0; i < count0; i++)
    {
        array[i] = 0;
    }
    for (int i = count0; i < (count0 + count1); i++)
    {
        array[i] = 1;
    }
    for (int i = (count0 + count1); i < (count0 + count1 + count2); i++)
    {
        array[i] = 2;
    }
    // PRINTING OUTPUT
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    // SOLUTION 2 : time=O(n) , space=O(n)
    // int j = 0;
    // int array2[n];
    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] == 0)
    //     {
    //         array2[j] = 0;
    //         j++;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] == 1)
    //     {
    //         array2[j] = 1;
    //         j++;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] == 2)
    //     {
    //         array2[j] = 2;
    //         j++;
    //     }
    // }
    // // PRINTING OUTPUT
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array2[i] << " ";
    // }

}