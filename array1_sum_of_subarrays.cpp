#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    // storing the values in array
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // calculating the sum of subarrays in an array
    int curr_sum = 0;   // initialize sum with 0
    for(int i=0; i<n; i++){   
        curr_sum = 0;
        for(int j=i; j<n; j++){
            curr_sum += arr[j];
            cout << curr_sum <<endl;
        }
    }

    return 0;
}