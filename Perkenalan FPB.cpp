#include <bits/stdc++.h>
using namespace std;

long long cek(long long x, long long y){
    
    if(y==0){
        
        return x;
        
    } else {
        
        return cek(y, x % y);
        
    }
    
}

int main(){
    
    long long a, b, c, d, e, f, p,q;
    
    cin>>a>>b>>c>>d;
    
    e = (a*d) + (b*c);
    f = (b*d);
    
    long long fpb = cek(e,f);
    
    cout<<e/fpb<<" "<<f/fpb;
    
    return 0;
}
