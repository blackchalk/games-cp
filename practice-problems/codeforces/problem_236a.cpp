//https://codeforces.com/contest/236/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
string u,t="";
cin>>u;
for (int i = 0; i < u.length(); i++)
{
    size_t found = t.find(u.at(i)); 
    if (found == string::npos || i==0) {
        t+=u.at(i);
    }
}
if(t.length()%2==0){ 
    cout << "CHAT WITH HER!"; 
}else{
    cout << "IGNORE HIM!";
}
return 0;
}
