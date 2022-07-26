#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
  long num;
  cout<<"Enter a number to reverse:-";
  cin>>num;
 long rev=0;
  // 1 2 3
  while(num!=0)
  {
    int rem=num%10;
    rev=rev*10+rem;  //0*10+3  = 3
    num=num/10;      //3*10+2  = 32
                     //32*10+1 =321
    
  }

  cout<<"Reverse of number-"<<rev<<endl;
}
