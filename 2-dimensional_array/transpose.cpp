#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    
    // square matrix
    // storing the values in array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // Transpose logic
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            // swap 
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // print the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}