#include <stdio.h>
int Isinside(int y, int x, int row, int line)
{
    if ((y >= 0 && y < row) && (x >= 0 && x < line))
        return 1;
    else
        return 0;
}
int main(void)
{
    int row, line, x, y;
    int sum = 0;
    scanf("%d%d", &row, &line);
    int num[10][10];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < line; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    scanf("%d%d", &y, &x);
    x--;
    y--;

    for (int i = y - 1; i <= y + 1; i++)
    {
        for (int j = x - 1; j <= x + 1; j++)
        {
            if (Isinside(i, j, row, line))
            {
                sum += num[i][j];
            }
        }
    }
    sum -= num[y][x];
    printf("%d\n", sum);

    return 0;
}

