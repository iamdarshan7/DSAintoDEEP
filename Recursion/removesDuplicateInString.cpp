#include<iostream>
using namespace std;

string removesDuplicate(string s)
{
    // Base Condition
    if(s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removesDuplicate(s.substr(1));

    if(ch == ans[0])
    {
        return ans;
    }
    return (ch+ans);
}

int main()
{
    cout<<removesDuplicate("aaadddsssssssssf");
    return 0;
}