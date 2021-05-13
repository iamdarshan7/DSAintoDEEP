#include<iostream>
using namespace std;

void rotateBy1(int arr[], int n)
{
    int end = n-1;
    int temp = arr[end];
    for(int i=end; i>0; i--)
    {
    arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void rotateByK(int arr[], int n, int k)
{
    for(int i=0; i<k; i++){
        rotateBy1(arr, n);
    }
}
int main() 
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    
    rotateByK(arr, n, k);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}