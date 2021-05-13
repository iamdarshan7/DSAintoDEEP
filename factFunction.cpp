#include<iostream>
using namespace std;

int fact(int num){
    int f = 1;
    for(int i=2; i<=num; i++){
        f *= i;
    }
    return f;
}

int main(){
    int n;
    cin>>n;
    
    cout<<fact(n);
    return 0;
}