//http://codeforces.com/contest/263/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
int matrix,row,col,ans=0;
for (col = 1; col <= 5; ++col)
{
  for (row = 1; row <= 5; ++row)
  {
    cin >> matrix;
    if(matrix==1){
      ans = abs(col-3) + abs(row-3);
    }
  }
}
cout << ans;
return 0;
}