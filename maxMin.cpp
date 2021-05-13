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

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }

        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    
    cout<<"Max No: "<<maxNum<<endl;
    cout<<"Min No: "<<minNum<<endl;
    return 0;
}