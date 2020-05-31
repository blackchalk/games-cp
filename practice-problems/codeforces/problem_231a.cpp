//http://codeforces.com/contest/231/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
int p,ans=0;
cin>>p;
for (int i = 0; i < p; i++)
{
    int a,b,c;
    cin >> a >> b >> c;
    ans += (a+b+c) >= 2;
}
cout<<ans<<endl;
return 0;
}