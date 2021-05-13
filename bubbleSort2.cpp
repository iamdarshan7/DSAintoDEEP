#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    // storing values in array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Bubble sort5
    
    for(int i=1; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Displaying the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }


    return 0;
}