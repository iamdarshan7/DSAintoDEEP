#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    int index=0;
    cin>>key;

    for(int i=0; i<n; i++){
        if(arr[i]==key){
            index = i;
            break; 
        }
    }
    cout<<index;

    return 0;
}
