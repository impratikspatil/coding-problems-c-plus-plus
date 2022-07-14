#include <bits/stdc++.h>
using namespace std;

void solve(int x){
    
	   
	   
	   if(x%2==0){
	       cout<<"Yes"<<endl;
	   }
	   else{
	       if(x>=7){
	           cout<<"Yes"<<endl;
	       }
	       else{
	           cout<<"No"<<endl;
	       }
	   }
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    
	       
	   solve(N); 
	   
	    
	}
	return 0;
}