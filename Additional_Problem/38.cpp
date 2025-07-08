#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1,string s2)
{
    if(s1.size()!=s2.size())
    return false;

    for(char &c:s1)c=tolower(c);
    for(char &c:s2)c=tolower(c);
    int freq1[26]={0};
    int freq2[26]={0};

    for(char c:s1)
    {
        freq1[c-'a']++;
    }
    for(char c:s2)
    {
        freq2[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
        return false;
    }
    return true;

}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    if(isAnagram(s1,s2))
    cout<<"anagram";
    else cout<<"not anagram";


}
