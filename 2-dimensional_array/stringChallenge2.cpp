#include<iostream>
using namespace std;

int main()
{
    string s = "kfsfksakfdfkjfd";
    
    // Creating 26 length array for a-z
    int freq[26]; // storing zero to each element in array
    for(int i=0; i<26; i++)
    {
        freq[i] = 0;
    }

    // loop over the given string ans increment the freq value while checking
    for(int i=0; i<s.size(); i++)
    {
        freq[s[i]-'a']++;  // eg. if s[i] is a then freq['a'-'a']=fre[0]
    }
    
    char ans = 'a';
    int maxF = 0; 

    for(int i=0; i<26; i++)  // loop over the made array and check the max value
    {
        if(freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i+'a';     // eg if i is 0 then 0+'a'= a
        }
    }

    cout<<maxF<<' '<<ans<<endl;
    return 0; 
}