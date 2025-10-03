#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, kpk;
    
    cin>>n;
    
    int hari[n], kpks;
    
    for(int i = 0; i < n; i++){
        
        cin>>hari[i];
        
    }
    bool first = true;
    sort(hari, hari+n);
    
    for(int i = 0; i < n-1; i++){
        
        int x = hari[i];
        int y = hari[i+1];
        
        if(first){
            kpk = x;
            kpks = kpk;
        }
        
        while(kpk%y!=0){
            kpk += kpks;
        }
        kpks = kpk;
        first = 0;
    }
    
    cout<<kpk;
}
