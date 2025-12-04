#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int num[n][n];
    int min[n];
    int col_sig[n];
    for (int row = 0; row < n; row++)
    {
        scanf("%d", &num[row][0]);
        min[row] = num[row][0];
        col_sig[row] = 0;
        for (int col = 1; col < n; col++)
        {
            scanf("%d", &num[row][col]);
            if (num[row][col] < min[row])
            {
                min[row] = num[row][col];
                col_sig[row] = col;
            }
        }
    }
    int max = min[0];
    int row_sig = 0;
    for (int i = 1; i < n; i++)
    {
        if (min[i] > max)
        {
            max = min[i];
            row_sig = i;
        }
    }
    printf("%d %d %d\n", max, row_sig, col_sig[row_sig]);
}
