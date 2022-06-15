//leetcode link -https://leetcode.com/problems/roman-to-integer/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='M')
            {
                sum+=1000;
            }
            if(s[i]=='D')
            {
                sum+=500;
            }
            if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    sum+=400;
                    i++;
                      continue;
                }
                else if(s[i+1]=='M')
                {
                    sum+=900;
                    i++;
                      continue;
                }else{
                    sum+=100;

                }
            }
            if(s[i]=='L')
            {
                sum+=50;
            }
            if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    sum+=40;
                    i++;
                    continue;
                }
                else if(s[i+1]=='C')
                {
                    sum+=90;
                    i++;
                    continue;
                }
                else{
                    sum+=10;
                }
            }
            if(s[i]=='V')
            {
                sum+=5;
            }
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    sum+=4;
                    i++;
                      continue;
                }
                else if(s[i+1]=='X')
                {
                    sum+=9;
                     i++;
                      continue;
                }
                else{
                    sum+=1;
                }
            }
        }
        return sum;
        
    }
};

int main()
{
    
    Solution obj;
    int x=obj.romanToInt("MCMXCIV");
    cout<<x<<endl;
}