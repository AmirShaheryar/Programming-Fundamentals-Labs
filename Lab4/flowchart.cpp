#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<" Enter X : ";
    cin>>x;
    if(x<5)
    {
        cout<<" Enter Y ";
        cin>>y;
        if(y<20)
        {
            x=x+y;
            cout<<x;
        }
        else{
        cout<<x;
        }
    }
    else
    {
        y=2;
        x=x+y;
        cout<<x;

    }
    
}