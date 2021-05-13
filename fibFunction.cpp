#include<iostream>
using namespace std;

void fib(int num){
    int ft = 0;
    int st = 1;
    int nextterm;

    for(int i=1; i<=num; i++){
        cout<<ft<<" ";
        nextterm = ft + st;
        ft = st;
        st = nextterm;
    }
}

int main(){
    int n;
    cin>>n;

    fib(n);

    return 0;
}