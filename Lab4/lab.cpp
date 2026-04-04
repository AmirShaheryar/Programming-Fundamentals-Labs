#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int y=3;
    if(x>5 && y>3)
    {
        cout<<" Both Are Ok"; 
    }
    else if(x>5 && y<=3)
    {
        cout<<" Wrong ";
    }
    else
    {
        cout<<" Both Are Perfect ";
    }
    
}