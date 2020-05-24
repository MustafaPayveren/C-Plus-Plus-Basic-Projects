#include <iostream>

using namespace std;

int main()
{
    int SideLength;
    cout << "Enter the edge length : ";
    cin >> SideLength;

    for (int i = 0; i < SideLength; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < SideLength; i++)
    {
        for (int j = 0; j < SideLength; j++)
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i <= SideLength; i++)
    {
        for (int j = 0; j <= SideLength; j++)
        {
            if ((j == 0) || (i == j) || (j == SideLength))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i <= SideLength; i++)
    {
        for (int j = 0; j <= SideLength; j++)
        {
            if ((i == 0) || ((i + j) == SideLength) || (i == SideLength))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}