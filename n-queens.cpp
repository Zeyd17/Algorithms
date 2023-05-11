#include <iostream>
#define MAX_QUEENS 100

using namespace std;

int board[MAX_QUEENS + 1][MAX_QUEENS + 1];

bool can_place(int row, int column, int n)
{
    for (int i = 1; i < row; i++)
        if (board[i][column])
            return false;

    for (int i = row - 1, j = column - 1; i >= 1 && j >= 1; i--, j--)
        if (board[i][j])
            return false;

    for (int i = row - 1, j = column + 1; i >= 1 && j <= n; i--, j++)
        if (board[i][j])
            return false;

    return true;
}

void n_queens(int n, int row = 1)
{
    for (int column = 1; column <= n; column++)
    {
        if (can_place(row, column, n))
        {
            board[row][column] = 1;
            if (row < n)
            {
            	n_queens(n, row +1);
			}
			else
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= n; j++)
                        cout << board[i][j] << " ";
                    cout << endl;
                }
                cout << endl;
            }
            board[row][column] = 0;
        }
    }
}

int main()
{
    n_queens(4);
    return 0;
}
