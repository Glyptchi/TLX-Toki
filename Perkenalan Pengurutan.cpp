#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int baju[n];
    
    for(int i = 0; i < n; i++){
        
        cin>>baju[i];
    }
    
    sort(baju, baju+n);
    cout.precision(1);
    
    if(n<=0){
        cout<<1;
    }
    if(n%2==1){
        
        double ans = baju[n/2];
        cout<<fixed<<ans;
        
    } else {
        
        double sek = (baju[(n/2)-1] + baju[n/2]);
        double ans = sek/2.0;
        cout<<fixed<<ans;
        
    }
    
}
