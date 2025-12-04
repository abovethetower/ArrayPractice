#include <stdio.h>
#include <string.h>
int main(void)
{
    char strings[100][21];//存储20个字符实际上，数组大小要为21
    int num = 0;
    for (int i = 0; i < 100; i++)
    {
        char input;
        for (int j = 0; j < 21; j++)
        {
            input = getchar();
            if (input == '\n')
            {
                strings[i][j] = '\0';
                num++;
                break;
            }
            strings[i][j] = input;
        }
        if (strings[i][0] == 'e' && 
            strings[i][1] == 'n' &&
            strings[i][2] == 'd') 
        {
            num--;
            break;
        }
    }

    int order[100] = {0};
    int isbelong[100] = {0}; 
    int index = 0;
    for (int i = 0; i < num; i++)//最外层循环，按照字典序排列
    {
        char *min = NULL;
        for (int j = 0; j < num; j++)
        {
            if (isbelong[j] == 0)
            {
                min = strings[j];
                index = j; //注意实时更新信息，如果恰好选到了最小值，那么之前的index没有更新就会一直代表第一个字符串
                break;
            }
        }
        for (int j = 0; j < num; j++)
        {
            if (strcmp(min ,strings[j]) > 0 && isbelong[j] == 0) //strcmp()函数，a - b > 0, 应该是前面减后面
            {
                min = strings[j];
                index = j;
            }
        }

        order[i] = index;
        isbelong[index] = 1;
    } 

    for (int i = 0; i < num; i++)
    {
        printf("%s\n", strings[order[i]]);
    }
}
