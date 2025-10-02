#include <bits/stdc++.h>
using namespace std;

int r, c;
char arr[25][25];

int cekatas(int temp, int kol){
	
	int ans = 0;
	for(int bar = 0; bar < temp; bar++){
		
		if(arr[bar][kol]=='1'){
			ans++;
		}
	}
	
	return ans;
}

int carihitam(){
	
	int polo = -1;
	
	for(int bar = 0; bar < r; bar++){
		bool hitamsmua = true;
		for(int kol = 0; kol < c; kol++){
			if(arr[bar][kol]=='0'){
				hitamsmua = false;
				break;
			}
		}
		
		if(hitamsmua){
			for(int kol = 0; kol < c; kol++){
				arr[bar][kol]='0';
			}
			polo = bar;
			//cout<<bar<<endl;
		}
	}
	return polo;
}

void runtuh(int totalhitam, int temp, int kol){
	
	int anu;
	int jeglong = temp;
	for(int bar = 0; bar < temp; bar++){
		
		arr[bar][kol]='0';
		
	}
	
	while(arr[temp+1][kol]=='0'){
		
		temp++;
	}
	
	//for(int bar = temp; bar <= temp-totalhitam; bar--){
		
	//	arr[bar][kol] = '1';
		
	//z
	
	while(totalhitam){
		
		arr[temp][kol]='1';
		
		temp--;
		totalhitam--;
	}
	
}

int main(){
	
	long long temp = -10, ave=0;
	
	cin>>r>>c;
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			
		cin>>arr[i][j];	
		}
	}
	
	//	temp = carihitam();
		
	//	if(temp == -1){
	//		break;
	//	}
	temp = carihitam();
	while(temp > -1){
		
		for(int kol = 0; kol < c; kol++){
			
			int totalhitam = cekatas(temp, kol);
			cout<<totalhitam<<endl;
			runtuh(totalhitam, temp, kol);
			
		}
		
		temp = carihitam();
	}
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			
		cout<<arr[i][j];	
		}
		
		cout<<endl;
	}
	
}
