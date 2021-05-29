#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n and y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int **arr, int x, int y, int n, int **solArr)   // x is x-axis starting point y is y-axis starting point
{
    // Base condition
    if (x == n - 1 and y == n - 1)     // last step in the given maze
    {
        solArr[x][y] = 1;
        return true;
    }

    // Recursion condition
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;                          // means rat can go through this position

        if (ratInMaze(arr, x + 1, y, n, solArr))   // goes to one step to right
        {
            return true;
        }
        if (ratInMaze(arr, x, y + 1, n, solArr))   // goes to one step down
        {
            return true;
        }

        // if above if condition does not run then need to backtrack by making position
        // value to zero and return false
        solArr[x][y] = 0; // Backtracking
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    // dynamic array space allocation declaration
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    
    // storing the value in that dynamic space 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    // Dynamic array space allocation for solutionArray with each postion preequates to zero
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    
    // calling the ratInMaze() function with its parameters
    if (ratInMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<solArr[i][j]<<' ';
            }
            cout<<endl;
        }
    }

    return 0;
}
