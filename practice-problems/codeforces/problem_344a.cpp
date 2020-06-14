//https://codeforces.com/contest/344/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int m, count=0, ans=1,cnt=0;
char c[1000000];
cin >> m;
while (count < (m*2))
{
    cin >> c[count] >> c[count+1];
    count = count + 2;
}
while (cnt < strlen(c)-1)
{
    if(c[cnt] == c[cnt+1]){
        ans++;
    }
    cnt++;
}
cout << ans << "\n";
return 0;
}
