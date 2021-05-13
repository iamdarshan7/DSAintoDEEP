#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "adsfjahksdjk";

    // convert into uppercase
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= 'a' and str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    cout<<str<<endl;

    // convert into lowercase
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    cout<<str;

    return 0;
}