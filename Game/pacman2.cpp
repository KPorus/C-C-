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
            else if (x == 2 && y > 1 && y < 5)
            {
                arr[x][y] = "#";
            }
            else if (x == 1 && y > 5 && y < 10)
            {
                arr[x][y] = "#";
            }
            else if (y == 11 && x > 2 && x < 5)
            {
                arr[x][y] = "#";
            }
            else
            {
                arr[11][12] = "O";
                arr[4][7] = "O";
                arr[1][9] = "O";
                arr[5][1] = "O";
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
    int count = 0;

    playField();

    while (true)
    {
        cout << "\t\t\tYour Score: " << count << "\n";
        cout << "\nEnter your move: ";
        cin >> ch;
        if (ch == 's')
        {
            py += 1;
            // if (py == 14)
            // {
            //     py -= 1;
            // }
            if (py > 0)
            {
                int i = py - 1;
                arr[i][px] = " ";
            }
        }
        if (ch == 'd')
        {
            px += 1;
            // if (px == 14)
            // {
            //     px -= 1;
            // }
            if (px > 0)
            {
                int i = px - 1;
                arr[py][i] = " ";
            }
        }
        if (ch == 'w')
        {
            py -= 1;
            // if (py == 0)
            // {
            //     py += 1;
            // }
            if (py > 0)
            {
                int i = py + 1;
                arr[i][px] = " ";
            }
        }
        if (ch == 'a')
        {
            px -= 1;
            // if (px == 0)
            // {
            //     px += 1;
            // }
            if (px > 0)
            {
                int i = px + 1;
                arr[py][i] = " ";
            }
        }

        if (arr[py][px] == ".")
        {
            count++;
        }
        if (arr[py][px] == "O")
        {
            system("CLS");
            system("COLOR 06");
            cout << "\n\n\t\t\t************ Game End ************\n\n";
            cout << "\n\n\t\t\t************ Your Score: " << count << "************\n\n";
            break;
        }

        if (arr[py][px] == "#")
        {
            system("CLS");
            system("COLOR 06");
            cout << "\n\n\t\t\t************ Game Over ************\n\n";
            cout << "\n\n\t\t\t************ Your Score: " << count << " ************\n\n";
            break;
        }

        if (count == 119)
        {
            system("CLS");
            system("COLOR 06");
            cout << "\n\n\t\t\t************ Congratulation!! You Win!! You are the best!!! ************\n\n";
            cout << "\n\n\t\t\t************ Your Score: " << count << "************\n\n";
            cout << "\n\n\t\t\t************ Game End ************\n\n";
            break;
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
