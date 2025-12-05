#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int vector[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            vector[top][i] = (num++);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            vector[i][right] = (num++);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                vector[bottom][i] = (num++);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                vector[i][left] = (num++);
            }
            left++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != 0)
            {
                printf(" ");
            }
            printf("%2d", vector[i][j]);
        }
        printf("\n");
    }

    return 0;
}
