# 数组练习的总结

## 二、九宫格操作  
- 对于二维数组，要记住第一个是行，第二个是列
    ```
    int arr[x][y];
    ```  
- 注意switch语句的贯穿问题
    ```
    switch (var):
        case 1:
            语句;
            break;
        case 2:
            语句;
            break;
        default:
            语句;
            break;
    ```  
- 对于在循环中含有输入的情况，可以在循环内部写输入语句，然后用条件语句来进行限制
    ```
    char input;
    for (int i = 0; i < 8; i++)
    {
        intput = getchar();
        if (input == '\n') break;
        operate(keyboard, input, &x, &y);
        printf("%d", y * 3 + x + 1);
    }
    ```
- 要善于使用debug来查看代码的问题，关注动态变化，看代码有哪个部分写的不正确。
