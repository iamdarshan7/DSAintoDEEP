#include<iostream>
using namespace std;

void reverse(string s)
{
    // Base condition
    if(s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}


int main()
{
    reverse("vai");
    return 0;
}