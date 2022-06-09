// codechef link- https://www.codechef.com/submit-v2/MINORMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    int flag=0;
	    
	    for(auto i=0;i<n;i++)
	    {
	        cin>>arr[i];
        
    
	        
	    }
        int max=arr[0];
        int min=arr[0];

        for(int i=0;i<n;i++)
        {
             if(arr[i]>=max)
            {
                max=arr[i];
                // cout<<"max = "<<max<<endl;
            }
            if(arr[i]<min)
            {
                min=arr[i];
                //  cout<<"min = "<<min<<endl;
            }

             if(arr[i]==max || arr[i]==min)
	       {
	           flag=1;
	       }
           else{
               flag=0;
               break;
           }
        }
        
        if(flag==1)
           {
               cout<<"YES\n";
           }
        if(flag==0)
        {
            cout<<"NO\n";
        }
	    
	    
       
	     
	   
	    
	}
	return 0;
	
}
