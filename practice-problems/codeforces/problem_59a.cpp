//https://codeforces.com/contest/59/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
string s;
cin >> s;
int l=0,c=0;
for (int i = 0; i < s.size(); i++)
{
    if (s[i] < 92)
    {
        c++;
    }else{
        l++;
    }
}

if (c>l)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 92)
        {
            s[i] -= 32;
        }
    }
}else{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 92)
        {
            s[i] += 32;
        }
    }
}

cout << s;
return 0;
}
