//http://codeforces.com/contest/677/problem/A
//http://codeforces.com/contest/677/problem/A
#include<iostream>
using namespace std;
int main(){
    int n,h,a,min_roadwidth = 0;
    cin>>n>>h;
    while (n--)
    {
        cin>>a;
        if(a>h){min_roadwidth+=2;}
        else{min_roadwidth+=1;}
    }
    cout << min_roadwidth;
    return 0;
}