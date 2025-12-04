#include <stdio.h>
void operate(int array[][3], char input, int *x, int *y)
{
    array[*x][*y] = 0;
    switch (input)
    {
        case '1': 
            (*x)--;
            (*y)++;
            break;
        case '2':
            (*y)++;
            break;
        case '3':
            (*x)++;
            (*y)++;
            break;
        case '4':
            (*x)--;
            break;
        case '6':
            (*x)++;
            break;
        case '7':
            (*x)--;
            (*y)--;
            break;
        case '8':
            (*y)--;
            break;
        case '9':
            (*x)++;
            (*y)--;
            break;
    }
    array[*x][*y] = 1;
}
int main(void)
{
    int keyboard[3][3] = {0};
    int x, y;
    scanf("%d%d", &y, &x);
    getchar();
    keyboard[y][x] = 1;
    
    printf("%d", y * 3 + x + 1);
    char input;
    for (int i = 0; i < 8; i++)
    {
        input = getchar();
        if (input == '\n')
            break;
        operate(keyboard, input, &x, &y);
        printf("%d", y * 3 + x + 1 );
    }
    printf("\n");
    return 0;


}

