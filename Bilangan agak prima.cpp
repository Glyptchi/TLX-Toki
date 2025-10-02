#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x,y;
    cin>>x;
    
    for(int k=1; k<=x; k++){
        cin>>y;
        int faktor=0;
        for(int i=1; i<=y; i++){
            if(y%i==0) faktor++;
            if(faktor>4) break;
        }
        
    if(faktor<=4) cout<<"YA"<<endl;
    if(faktor>4) cout<<"BUKAN"<<endl;
    }
}
