#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
string arr[15][15];
int x, y;
int py = 1, px = 1;

void playField()
{
    // design the play field
    for (int x = 0; x < 15; x++)
    {
        for (int y = 0; y < 15; y++)
        {
            if (x == 0 || x == 14)
            {
                arr[x][y] = "#";
            }
            else if (y == 0 || y == 14)
            {
                arr[x][y] = "#";
            }
            else if (x == 10 && y > 2 && y < 12)
            {
                arr[x][y] = "#";
            }
            else if (y == 3 && x > 3 && x < 10)
            {
                arr[x][y] = "#";
            }
            else if (y == 13 && x > 3 && x < 10)
            {
                arr[x][y] = "#";
            }
            else if (x == 7 && y > 3 && y < 8)
            {
                arr[x][y] = "#";
            }
            else if (x == 12 && y > 3 && y < 8)
            {
                arr[x][y] = "#";
            }
            else if (x == 5 && y > 2 && y < 12)
            {
                arr[x][y] = "#";
            }
            else
            {
                arr[x][y] = ".";
            }
        }
    }
    // display the play field
    arr[py][px] = "@";
    for (int x = 0; x < 15; x++)
    {
        for (int y = 0; y < 15; y++)
        {
            cout << arr[x][y] << " ";
        }
        cout << "\n";
    }
}
int main(int argc, char *argv[])
{
    char ch;

    playField();

    while (true)
    {
        cout << "\nEnter your move: ";
        cin >> ch;
        if (ch == 's')
        {
            py += 1;
            if (py == 14)
            {
                py -= 1;
            }
            if (py > 0)
            {
                int i = py - 1;
                arr[i][px] = " ";
            }
        }
        if (ch == 'd')
        {
            px += 1;
            if (px == 14)
            {
                px -= 1;
            }
            if (px > 0)
            {
                int i = px - 1;
                arr[py][i] = " ";
            }
        }
        if (ch == 'w')
        {
            py -= 1;
            if (py == 0)
            {
                py += 1;
            }
            if (py > 0)
            {
                int i = py + 1;
                arr[i][px] = " ";
            }
        }
        if (ch == 'a')
        {
            px -= 1;
            if (px == 0)
            {
                px += 1;
            }
            if (px > 0)
            {
                int i = px + 1;
                arr[py][i] = " ";
            }
        }
        system("CLS");
        arr[py][px] = "@";
        for (int x = 0; x < 15; x++)
        {
            for (int y = 0; y < 15; y++)
            {
                cout << arr[x][y] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
