#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool isPalindrome=true;
    int start=0;
    int end=s.length()-1;
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            isPalindrome=false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome)
    cout<<"palindrome";
    else cout<< s << " "<< "is not palindrome";
}
