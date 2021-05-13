#include "bits/stdc++.h"
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int given_num;
    cin>>given_num;
    
    int i=0, j=0, sum=0, st=-1, en=-1;
    while(j<n && sum+arr[j] <= given_num){
        sum += arr[j];
        j++;
    }

    if(sum == given_num){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum += arr[j];
        while(sum>given_num){
            sum -= arr[i];
            i++;
        }

        if(sum == given_num){
            st = i+1;
            en = j+1;
            break;
        }
    }
    
    cout<<st<<" "<<en<<endl;
    return 0;
}