#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int arr1[n1][n2];
    int arr2[n2][n3];
    
    // for array1 storing values
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>arr1[i][j];
        }
    }
    // for array2 storing values
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin>>arr2[i][j];
        }
    }
    // storing 0 to each element in the resutant ans array
    int ans[n1][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            ans[i][j] = 0;
        }
    }
    
    // Multiplication in array1 & array2 and storing values in ans array
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; i++){
            for(int k=0; k<n2; k++){
                ans[i][j] = arr1[i][k] * arr2[k][j]; 
            }
        }
    }
    
    // Displaying ans array
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<< ans[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;

}