#include <iostream>
using namespace std;

int main()
{
    cout<<"Input array size and elements"<<endl;
    int n;
    cin>>n;
    int array[n];
    //TAKING INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    //SOLUTION
    int mini=array[0];
    int maxi=array[0];
    for(int i=0;i<n;i++)
    {
        mini=min(mini,array[i]);
        maxi=max(maxi,array[i]);
    }
    cout<<"Max and Min is "<<maxi<<" and "<<mini<<endl;
}