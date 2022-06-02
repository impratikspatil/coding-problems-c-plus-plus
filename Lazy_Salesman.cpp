// Link for this question - https://www.codechef.com/submit-v2/HOLIDAYS

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int testcases,N,W;
    
	cin>>testcases;
	for(auto i=0;i<testcases;i++) //for testcases
    {
        cin>>N>>W;
        int arr[N];     
        int sum=0;

        for(auto j=0;j<N;j++)
        {
            cin>>arr[j];
        }
         sort(arr,arr+N);

         
         for(auto k=N-1;k>=0;k--)
        {
            sum+=arr[k];
            
            if(sum>=W)
            {
                cout <<k<< std::endl;
                break;
            }
           
        }
        if(sum<W)
        {
            cout<<"0\n";
        }


    }
	return 0;
}
