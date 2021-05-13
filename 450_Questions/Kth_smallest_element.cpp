#include<iostream>
#include<climits>
using namespace std;

void sortArray(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j= i-1;
        while(arr[j]<current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    
    sortArray(arr, n);

    for(int i=0; i<n; i++){
        if(i == k){
            cout<<arr[i];
        }
    }

    return 0;
}