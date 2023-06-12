#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll tc;
	cin>>tc;
	while(tc--){
		ll N, X;
		cin>>N>>X;
		string S;
		for(int i=0;i<N;i++){
			char temp;
			cin>>temp;
			S+=temp;
		}
		ll ans = 0, ones = 0;
		map<int, int> zero;
		for(int i=0;i<N;i++){
			if(S[i] == '1') ones++;
		}
		ll i=0;
		while(i<N){
			int count = 0;
			if(S[i] == '0'){
				while(S[i] == '0' && i<N){
					count++;
					i++;
				}	
				zero[-count]++;
			}
			else i++;
		}

		for(auto x : zero){
			for(int j = 0 ; j<x.second;j++){
				int temp = -(x.first);
				while(temp != 0){
					if((2*temp + 1) > X) temp--;
					else if((2*temp + 1) <= X){
						X = X - (2*temp+1);
						break;
					}
				}
				ones = ones + temp;
			}
		}
		cout<<ones<<endl;
	}
	return 0;
}