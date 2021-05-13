#include<iostream>
using namespace std;

int main() {
    int mx = -1999999;
    int n;
    cin>>n;
    
    // Storing values in array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    // Calculating the max value in array at particular position
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<endl;
    }

    return 0;

}