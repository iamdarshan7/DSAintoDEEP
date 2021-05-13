#include<iostream>
#include<climits>
using namespace std;


int main() {
    int n;
    cin>>n;

    // Storing the values in array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    
    // Main Logic
    // int minNum = INT_MAX;
    int count = 0;
    for(int i=1; i<=n; i++){
        if(arr[i-1] < arr[i] && count == k){
            cout<<arr[count];
        }
        count++;
    }

    return 0;
}


