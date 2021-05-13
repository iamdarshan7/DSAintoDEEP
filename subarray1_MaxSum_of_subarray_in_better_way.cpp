#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int cum_arr[n+1];
    cum_arr[0] = 0;

    for(int i=1; i<=n; i++){
        cum_arr[i] = cum_arr[i-1] + arr[i-1];
    }
    
    int max_sum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = cum_arr[i] - cum_arr[j];
            max_sum = max(max_sum, sum);
        }
    }

    cout<<"MaximumSum : "<<max_sum<<endl;

    return 0;
}