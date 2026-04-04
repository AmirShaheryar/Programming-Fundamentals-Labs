#include<iostream>
using namespace std;
int main()
{
    double a;
    cout<<" Enter A Number ";
    cin>>a;
    if(a>=5 || a<-5)
    {
        cout<<" Abnormal ";
    }
    else if(a>=0 && a<3)
    {
        cout<<" Positive Normal ";
    }
    else if(a>=3 && a<5)
    {
        cout<<" Positive Critical ";
    }
    else if(a>=-5 && a<-3)
    {
        cout<<" Negative Critical ";
    }
    else if(a>=-3 && a<0)
    {
        cout<<" Negative Normal ";
        
    }
}