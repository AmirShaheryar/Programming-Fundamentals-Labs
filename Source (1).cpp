#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
    char array[21][21];
    char bullet = '+';

    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if ((i == 0 && j == 0) || (i == 20 && j == 20) || (i == 0 && j == 20) || (i == 20 && j == 0))
            {
                array[i][j] = '+';
            }
            else if ((i == 0) || (i == 20))
            {
                array[i][j] = '-';
            }
            else if ((j == 20) || (j == 0))
            {
                array[i][j] = '|';
            }
            else
            {
                array[i][j] = ' ';
            }
        }
    }

    array[21 / 2][21 / 2] = '+';

    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }

    char Sym;
    cout << " Enter D: to shoot right ";
    cout << " Enter A: to shoot Left ";
    cout << " Enter W: to shoot up ";
    cout << " Enter S: to shoot down ";
    cin >> Sym;

    if (Sym == 'S' || Sym == 's')
    {
        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                if (j == 21 / 2 && i > (21 / 2))
                {
                    array[i][j] = '^';
                    Sleep(100);
                }
                cout << array[i][j];
            }
            cout << endl;
        }
    }
    else if (Sym == 'W' || Sym == 'w')
    {
        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                if (j == 21 / 2 && (i < (21 / 2)))
                {
                    array[i][j] = '^';
                    Sleep(100);
                }
                cout << array[i][j];
            }
            cout << endl;
        }
    }
    else if (Sym == 'd' || Sym == 'D')
    {
        for (int i = 0; i <= 20; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                if ((i == 21 / 2) &&(j > 21/2))
                {
                    array[i][j] = '^';
                    Sleep(100);
                }
                cout << array[i][j];
            }
            cout << endl;
        }
    }
    else if (Sym == 'a' || Sym == 'A')
    {
        for (int i = 0; i <= 20; i++)
        {
            for (int j = 0; j <=20; j++)
            {
                if ((i == 21 / 2) && (j < 21 / 2))
                {
                    array[i][j] = '^';
                    Sleep(100);
                }
                cout << array[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
