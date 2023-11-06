#include <iostream>
#include <vector>

using namespace std;

const int directions[8][2] = {
    {1, 0}, {0, 1}, {-1, 0}, {0, -1}, // Horizontal and vertical neighbors
    {1, 1},
    {1, -1},
    {-1, 1},
    {-1, -1} // Diagonal neighbors
};

void dfs(vector<vector<int>> &grid, int x, int y)
{
    int n = grid.size();
    grid[x][y] = 0; // Mark the current cell as visited

    for (int i = 0; i < 8; i++)
    {
        int new_x = x + directions[i][0];
        int new_y = y + directions[i][1];

        if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < n && grid[new_x][new_y] == 1)
        {
            dfs(grid, new_x, new_y); // Recursively visit neighboring cells
        }
    }
}

int countWarEagleColonies(vector<vector<int>> &grid)
{
    int n = grid.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                count++;
                dfs(grid, i, j); // Perform DFS from the current nest
            }
        }
    }

    return count;
}

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < N; j++)
        {
            grid[i][j] = row[j] - '0';
        }
    }

    int colonies = countWarEagleColonies(grid);
    cout << colonies << endl;

    return 0;
}
