#include<iostream>
using namespace std;
void table()
{
    int b;
    for(b=1;b<=10;b++)
    {
        cout<<5<<" * "<<b<<" = "<<5*b;
        cout<<endl;
    }
}

int seriesSum()
{
    int sum=0;
    for(int i=0;i<=1000;i++)
    {
        sum+=i;
    }
    return sum;
}
int sumBetween(int a,int b)
{
    int sum=0;
    for (int i=a;i<=b;i++)
    {
        sum+=i;
    }
    return sum;
}
int f1(int start, int end)
{
	int sum = 0;
	for (int i = start; i < end; i++)
	{
		sum += i;
	}
	return sum;
}
void f2()
{
	int array[1000];
	int avg = 0;
    for (int i = 0; i < 1000; i++)
	{
		array[i] = f1(2,(i+5));
		avg += array[i];
	}
	cout << avg / (1000);
}
int main()
{
    cout<<system("cls");
    int question;
    do
    {
        cout<<" Enter Question Number ";
        cin>>question;
        if(question==1)
        {
            table();
        }
        else if (question==2)
        {
            int sum=seriesSum();
            cout<<sum;
        }
        else if(question==3)
        {
            int a,b;
            cout<<" Enter Starting Number ";
            cin>>a;
            cout<<" Enter Ending Number ";
            cin>>b;
            int sum=sumBetween(a,b);
            cout<<" Sum Between "<<a<<" and "<<b<<" = "<<sum;
        }
        else if(question==4)
        {
            f2();
        }
        cout<<endl;
    } while (question!=0);
}   