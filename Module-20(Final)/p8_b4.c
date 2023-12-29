#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scnaf("%d %d", &row, &col);

    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scnaf("%d", &matrix[i][j]);
        }
    }

    int rem = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] == 1)
                {
                    rem = 1;
                }
                else
                {
                    rem = 0;
                    break;
                }
            }
            else if (j == col - 1 - i)
            {
                if (matrix[i][j] == 1)
                {
                    rem = 1;
                }
                else
                {
                    rem = 0;
                    break;
                }
            }
            else
            {
                if (matrix[i][j] == 0)
                {
                    rem = 1;
                }
                else
                {
                    rem = 0;
                    break;
                }
            }
        }
        if (rem == 0)
        {
            break;
        }
    }

    if (rem == 0) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
    return 0;
}