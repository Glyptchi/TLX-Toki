#include <iostream>

using namespace std;

bool prima(int x) {
	int i=2;
	bool mek=true;
	
	if(x==2) {
		mek = 1;
	} else if((x>2) && ((x%2)==0)) {
		mek=false;
	} else {
		while((i*i)<=x) {
			if((x%i)==0) {
				mek = false;
				break;
			}
			i++;
		}
	}
	
	return mek;
}

int main() {
	int a,i,pangkat,faktor=1;
	
	cin>>a;
	i=2;
	while(i<=a) {
		pangkat=0;
		if(prima(i)==true) {
			while((a%i)==0){
				pangkat++;
				a/=i;
			}
		}
		
		if(faktor==1) {
			if(pangkat==1)
				cout<<i;
			else if(pangkat>1)
				cout<<i<<"^"<<pangkat;
			else faktor--;
		} else {
			if(pangkat==1)
				cout<<" x "<<i;
			else if(pangkat>1)
				cout<<" x "<<i<<"^"<<pangkat;
			else faktor--;		
		}
		i++;
		faktor++;
	}
	return 0;
}
