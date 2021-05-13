#include<iostream>
using namespace std;

void swapByReference(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByValue(int a, int b){
    int temp = a;
    a = b; 
    b = temp;
}

int main() {
    int a = 2, b=4;

    cout<<a<<' '<<b<<endl;

    // swapByReference(&a,&b);
    swapByValue(a,b);

    cout<<a<<" "<<b<<endl;
    return 0;
}