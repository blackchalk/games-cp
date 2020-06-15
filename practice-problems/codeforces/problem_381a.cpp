//https://codeforces.com/contest/381/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);

int n,inp,s=0,d=0;
cin >> n;
int nm[n];
int count = 0;

while (count < n)
{
    cin >> inp;
    nm[count] = inp;
    count++;
}

sort(nm,nm+n,greater<int>());

for (int i = 0; i < n; i++)
{
    if(i%2==0){
        s+=nm[i];
    }else{
        d+=nm[i];
    }
}

cout << s << " " << d << endl;

return 0;
}

