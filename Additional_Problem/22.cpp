#include <bits/stdc++.h>
using namespace std;

int length(string s)
{
    int count=0;
    for(char c:s)
    {
        count++;
    }
    return count;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<length(s);
}
