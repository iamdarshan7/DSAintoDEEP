#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int end = n-1;

    int temp = arr[end];

    for(int i=end; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}