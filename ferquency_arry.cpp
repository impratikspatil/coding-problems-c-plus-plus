
// here I have used concept of frequency arrya which will helped me to find frequency of each char inside array



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout<<"Enter any string you want to find frequency:-";
    cin>>name;
    
    int freq[256];
    for(auto i=0;i<256;i++)
    {
        freq[i]=0;
    }

    for(auto i=0;i<name.size();i++)
    {
        freq[name[i]]++;
    }

       for(auto i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            cout<<char(i)<<" = "<<freq[i]<<endl;
        }
    }

  
}
//