#include<iostream>
using namespace std;
#define deb(x) cerr << #x << " = " << x << endl;


int32_t main(){
	ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int ans=0;
    if(n==1){
        cout<<9<<"\n";
        return 0;
    }
    while(n!=1){
        deb("in");
        
        deb(n);
        ans+=10-n%10;
        int tans=10-n%10;
        n+=10-n%10;
        deb(tans);
        deb(n);
        //reduce
        while(n%10==0 && n!=1){
            n=n/10;
        }
        deb("out");
        deb(n);
    }   
    ans++;
    cout<<ans<<"\n";
}