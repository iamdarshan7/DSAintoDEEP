#include<iostream>
using namespace std;

int Factorial(int n)
{   
    if(n == 0)
    {
        return 1;
    }

    int prevPower = Factorial(n-1);
    return n*prevPower;
}

int main()
{
    int n;
    cin>>n;

    cout<<"The Factorial of given n & p is : "<<endl;
    cout<<Factorial(n)<<endl;

    return 0;
}