// BruteForce Approach


#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Storing the values in array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int given_num;
    cin>> given_num;
    
    // Main Logic
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == given_num){
                cout<<"Start Pos: "<<i+1<<" "<<"End Pos: "<<j+1<<endl;
                return 0;
            }
        }
    }

    return 0;
}