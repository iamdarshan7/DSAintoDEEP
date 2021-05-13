#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // assume the ans_length is 2 because atleast 2 element has some differences.
    int ans = 2;
    // Let start from start and put the diff of 1st 2 element as pre_diff
    int pd = arr[1] - arr[0];
    // put the next value 2 to the variable which  is going to be used in loop below
    int j = 2;
    // let assume the curr length is 2 and if another has same length then increment this value
    int curr = 2;


    while(j<n){
        if(pd == arr[j] - arr[j-1]){       // if prev_diff equals with the next_diff
            curr++;                        // increment the curr_length by 1
        }
        else{                              // If prev_diff not equals to next_diff
            pd = arr[j] - arr[j-1];        // make new arrays diff as prev_diff
            curr = 2;                      // make the curr_value to 2
        }
        ans = max(ans,curr);               // compare the length of ans_length and curr_length & assign value to ans_length
        j++;
    }

    cout<<ans<<endl;                     // Display the ans_length
    return 0;
}