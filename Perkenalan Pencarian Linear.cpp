#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll n, k, temp, seli=399999, ans=200001;
    
    cin>>n>>k;
    
    ll x[n], i=0;
    
    for(int j = 0; j < n; j++){
        
        cin>>x[j];
        
    }
    
    sort(x, x+n);
    
    for(int i = 0; i < n; i++){
        
        if(x[i]==k){
            cout<<x[i];
            break;
        } else {
            
            temp = abs(k - x[i]);
            if(temp<seli){
                
                seli = temp;
                ans = x[i];
            }
        }
    }
    
    cout<<ans;
}
