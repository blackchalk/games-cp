// Input 3
// Output 3 10 5 16 8 4 2 1
#include <iostream>
using namespace std;
typedef long long ll;
int main(){
	ll n;
 cin >> n;
	while(true){
	cout << n << " ";
	if(n==1)break;
	if(n%2 == 0) n = n/2;
	else n = (n * 3) + 1;
}
}