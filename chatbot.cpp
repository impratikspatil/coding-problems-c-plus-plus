#include<bits/stdc++.h>
using namespace std;

void showFridge()
{
    cout<<"there are so many catogories are available:"<<endl;
    
}
int main()
{
    string sub;
    cout<<"---help desk management in accesseris shop----"<<endl;
    cout<<"-----what do you want to purchase-------"<<endl;
    cout<<"1.Fridge\n  2.Cooler\n 3.Bags"<<endl;
    cin>>sub;

    switch (sub)
    {
    case "Fridge":
        showFridge();
        break;
    
    default:
        break;
    }


}