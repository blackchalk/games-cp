//http://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    int a=0,b=0;
    string s;
    cin>>n>>s;
        for(char c : s){
            if(c=='A'){
                a++;
                
            }else{
                b++;
            }
        }
        if(a>b){cout<<"Anton";}
        else if (a<b)
        {
            cout<<"Danik";
        }else if(a==b){
            cout<<"Friendship";
        }
        
    return 0;
}