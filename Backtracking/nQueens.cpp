#include<iostream>
using namespace std;

bool isSafe(int** arr, int x , int y, int n)
{
    for(int row=0; row<x; row++)     // checking to place queen in the row
    {
        if(arr[row][y]==1)
        {
            return false;
        }
    }

    int row = x;
    int col = y;
    
    while(row>=0 and col>=0)          // checking the upper left diagonal  
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;
    
    while(row>=0 and col<n)           // checking the upper right diagonal
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    
    return true;                     // if all above condition is false then true means we can place queen at this postion
}

bool nQueen(int** arr, int x, int n)   // no needed int y as parameter as when we place queen in one place no need to compare y 
{
    // Base condition: for final queen
    if(x>=n)
    {
        return true;
    }

    // Recursion condition
    for(int col=0; col<n; col++)
    {
        if(isSafe(arr,x,col,n))
        {
            arr[x][col] = 1;     // assuming to place the queen at this position

            if(nQueen(arr,x+1,n))
            {
                return true;
            }
            
            arr[x][col] = 0;    // Backtracking
        }
    }
    return false;     // Not suitable for queen to be placed then return false
}

int main()
{
    int n;
    cin>>n;
    
    // Dynamically allocating array space with all zero values for 'n' length 2-d array
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++)
        {
            arr[i][j] = 0;
        }
    }
    
    cout<<endl;
    cout<<endl;
    

    // Displaying the output
    if(nQueen(arr,0,n))
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}