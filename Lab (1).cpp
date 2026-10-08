#include<iostream>
using namespace std;
void sleep()
{
    int x=0;
    while(x<999999)
    {
        x++;
    }
}
int main()
{
    
    char array[50][50];
    char a;
    int px=20/2;
    int qx=20/2;
    int py=20/2;
    int qy=30;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<40;j++)
        {
            if(i==0 || i==19)
            {
                array[i][j]='-';
            }
            else if (j==0 || j==19 || j==20 || j==39)
            {
                array[i][j]='|';
            }
            else
            {
                array[i][j]=' ';
            }
            
        }
    }
    do
    {
        cout<<" Enter W ";
        cin>>a;
        switch (a)
        {
            case 'w':
            {
                if (px!=1)
                {
                    px--;
                    qx--;
                }
            }
            break;
            case 's':
            {
                if (px!=18)
                {
                    px++;
                    qx++;
                }
            }
            break;
            case 'v':
            {
                if(py!=0)
                {
                    py++;
                    qy--;
                    
                }
            }
            break;   
            case 'd':
            {
                if(py!=0)
                {
                    py--;
                    qy++;
                    
                }
            }
            break;
        }
        array[px][py]='^';
        array[qx][qy]='^';

        for(int i=0;i<20;i++)
        {
            for(int j=0;j<40;j++)
            {
                if((i==px && j==py) ||(i==qx && j==qy)) 
                {
                    array[i][j]='^';
                }
                cout<<array[i][j];
            }
            cout<<endl;
        }
    } while (a!='o');
    
       
}