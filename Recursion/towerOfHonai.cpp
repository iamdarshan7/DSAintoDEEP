#include<iostream>
using namespace std;

void towerOfHonai(int n, char src, char dest, char helper)
{
    // Base Condition
    if( n==0)
    {
        cout<<"Hello"<<endl;
        return;
    }
    towerOfHonai(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHonai(n-1, helper, dest, src);
    cout<<"HI"<<endl;
}


int main()
{
    towerOfHonai(3, 'A', 'C', 'B');
    return 0;
}