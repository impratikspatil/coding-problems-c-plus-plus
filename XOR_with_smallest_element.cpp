#include <bits/stdc++.h>
using namespace std;
#define endl "\n"


int main() {
	// your code goes here
	int t;
	cin>>t;
	std::vector<long long int>v ;
	long long int n,x,y;
	
	
	while(t--)
	{
	    
	    cin>>n>>x>>y;
	    long long int num;
	    vector<long long int>vc;
	    
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>num;
	        vc.push_back(num);
	        
	    }
	    long long int lpcnt=0;
	    long long int indcount=0;
	    while(true)
	    {
	       long long int minval=*min_element(vc.begin(), vc.end());//minimum val
        //    cout<<"minval= "<<minval<<endl;
	       std::vector<long long int>::iterator itr = find(vc.begin(), vc.end(), minval);
	        
	       long long int minindex=distance(vc.begin(), itr);
	       v.push_back(minindex);
	       vc[minindex]=vc[minindex]^x;
	       if(lpcnt!=0 && v[lpcnt]==v[lpcnt-1])
	       {
	           break;
	       }
	       
	       lpcnt++;
	    }
          vc[v[v.size()-1]]^=x;
	   
	    
	    int finalnum=y-v.size()-2;
	    
	    if(finalnum%2==0)
	    {
	          vc[v[v.size()-1]]^=x;
	        sort(vc.begin(),vc.end());
            //  long long int minval=*min_element(vc.begin(), vc.end());//minimum val
            //    cout<<"minval= "<<minval<<endl;
	        for(auto i:vc)
	        {
	            cout<<i<<" ";
	        }
	        cout<<endl;
	    }
	    else{
	        
	         sort(vc.begin(),vc.end());
	          for(auto i:vc)
	        {
	            cout<<i<<" ";
	        }
	        cout<<endl;
	    }
        vc.clear();
        v.clear();
	    
	}
	return 0;
}
