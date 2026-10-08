#include<iostream>
using namespace std;
int main()
{
    int question;
    cout << " Enter Question Number ";
    cin >> question;
    if (question == 1)
    {
        double guess = 1;
        double res;
        for (int i = 1; i <= 25; i++)
        {
            if (i % 2 != 0)
            {
                for (int a = 1; a <= 10; a++)
                {
                    res = (guess + (i / guess)) / 2;
                    guess = res;
                }
                cout << " Square Root of " << i << " = " << res << endl;
            }
        }

    }
    else if (question == 2)
    {
        int number;
        int res = 1;
        int next;

        do
        {
            res = 1;


            cout << " Enter Number ";
            cin >> number;
            for (int i = 1; i <= number; i++)
            {
                res *= i;
            }
            cout << " Factorial of " << number << " = " << res << endl;
            cout << " 1 for next factorial 0 for terminate ";
            cin >> next;
            cout << endl;
        } while (next == 1);


    }
    else if (question == 3)
    {
        int number, exponent;
        cout << " Enter Number ";
        cin >> number;
        cout << " Enter Exponent ";
        cin >> exponent;
        int res = 1;
        if (exponent >= 0)
        {
            for (int i = 1; i <= exponent; i++)
            {
                res *= number;
            }
            cout << res;
        }

    }
    else if (question == 4)
    {
        int number;
        cout << " Enter Number ";
        cin >> number;
        int limit;
        cout << " Enter Limit ";
        cin >> limit;
        for (int i = 1; i <= limit; i++)
        {
            cout << number << " * " << i << " = " << number * i;
            cout << endl;
        }

    }
    else if (question == 5)
    {
        int floors;
        cout << " Enter Number Of Floors ";
        cin >> floors;
        int store;
        int store1, store2;
        double rooms=0, unoccupied = 0, occupied = 0;

        for (int i = 1; i <= floors; i++)
        {
            if(i!=13)
            {
                cout << " Total Room son floor " << i<<" ";
                cin>>store1;
                rooms += store1;
                do
                {
                    cout << " Enter Rooms Occupied " << " ";
                    cin >> store2;
                } while (store2>store1);
                occupied += store2;
                store = store1 - store2;
                cout << " Unoccupied Rooms " << store<<endl;
                unoccupied += store;
            }
        }
        cout << " Total Rooms " << rooms << endl;
        cout << " Total Occupied Rooms " << occupied << endl;
        cout << " Total Unoccupied Rooms " << unoccupied << endl;
        double rate = occupied / rooms;
        cout <<" Rate " << rate*100<<" % " << endl;
    }
    else if (question == 6)
    {
        int height;
        cout << " Enter Height ";
        cin >> height;
        for (int i = 1; i <= height; i++)
        {
            for (int j = 1; j <= height - (i - 1); j++)
            {
                cout << height - (i - 1);
            }
            cout << endl;
        }
    }
    else if (question == 7)
    {
        int number;
        cout << " Enter Limit ";
        cin >> number;
        int res = 0;
        int j;
        for (int i = 1; i <= number; i++)
        {
            j = 0;
            j = i * i;
            res += j;
            if (i < number)
            {
                cout << "(" << i << "*" << i << ")" << " + ";
            }
            else if (i == number)
            {
                cout << "(" << i << "*" << i << ")" << " = ";
            }
        }
        cout << res;
    }
    else if (question == 8)
    {
        int height;
        cout << " Enter Height ";
        cin >> height;
        for (int i = 1; i <= height + 2; i++)
        {
            if (i == 1 || i == height + 2)
            {
                for (int j = 1; j <= height; j++)
                {
                    cout << "=";
                }
                cout << " ";
                for (int j = 1; j <= height; j++)
                {
                    cout << "=";
                }
                cout << " ";
                for (int j = 1; j <= height; j++)
                {
                    cout << "=";
                }

            }
            else
            {
                cout << "=";
                for (int i = 1; i <= (height * 3); i++)
                {
                    cout << " ";
                }
                cout << "=";
            }

            cout << endl;

        }

    }
    else if (question == 9)
    {
        int array[100] = {};
        int size;
        int sum = 0;
        cout << " Enter Size ";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cout << " Enter Number " << i + 1 << " ";
            cin >> array[i];
        }
        for (int o = 0; o < size; o++)
        {
            sum += array[o];
        }
        cout << sum;
    }
    else if (question == 10)
    {
        int array[100] = {};
        int size;
        cout << " Enter Size ";
        cin >> size;
        for (int o = 0; o < size; o++)
        {
            cout << " Enter Number " << o + 1 << " ";
            cin >> array[o];
        }
        cout << " Original Array " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << array[i];
            cout << " ";

        }
        cout << endl;
        cout << " Reversed Array " << endl;
        for (int j = size - 1; j >= 0; j--)
        {
            cout << array[j];
            cout << " ";
        }
    }
}