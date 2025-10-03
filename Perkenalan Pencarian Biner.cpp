#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll maks = 100005;

int main(){
	
	ll n, q; cin>>n;
	ll hewan[maks], ask[maks];
	
	for(int i = 1; i <= n; i++){
		
		cin>>hewan[i];
		
	}
	for(int i = 1; i <= n; i++){
		
		ask[i] = ask[i-1] + hewan[i];
		
	}
	
	cin>>q;
	
	for(int i = 1; i <= q; i++){
		int s; cin>>s;
		
		int j = 1, r=n, ans = 0;
		while(j<=r){
			
			int teng = (j+r)/2;
			if(ask[teng]>=s){
				ans = teng;
				r = teng - 1;
			}else{
				j = teng + 1;
			}
			
		}
		cout<<ans<<endl;
	}
	
}
