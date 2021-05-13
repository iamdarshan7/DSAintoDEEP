#include<iostream>
using namespace std;


int main(){
    // declaring the variables
    int n;
    // asking the value of n
    cin>>n;
    
    // for storing the values in array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // loop i from first item to the secondlast item i.e 0 to n-1
    // loop j from second item to the last_item
    // use the value of i to be next value for j for starting point
    // check if the j looped item is less than i looped then swap 
    for(int i=0; i<n-1; i++){  
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // for printing the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' '<<endl;
    }
    
}