#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    // Storing the values in array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 

    // Insertion sort
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j]; // placing each greater number than current to 1 next to their place.
            j--;  
        }
        arr[j+1] = current; // When while has terminated the j value would be at 1 place less it need to be so we done arr[j+1]
    }


    // Displaying array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}