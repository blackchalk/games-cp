//https://codeforces.com/contest/405/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int col;
cin >> col;
int foo[col];
for (int i = 0; i < col; i++)
{
    cin >> foo[i];
}
sort(foo,foo+col);
for (int i = 0; i < col; i++)
{
    cout << foo[i] << " ";
}
return 0;
}