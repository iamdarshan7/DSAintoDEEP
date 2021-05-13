#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter your target value "<<endl;
    int target;
    cin>>target>>endl;
    bool found = false;
    int col_end = m-1, row_start=0;
    while(row_start<n && col_end >= 0){
        if(arr[row_start][col_end]== target){
            found = true;
        }
        else if(arr[row_start][col_end] > target){
            col_end--;
        }
        else{
            row_start++;
        }
    }

    if(found){
        cout<<"Yes it there";
    }
    else{
        cout<<"No it is not there";
    }
    return 0;
}