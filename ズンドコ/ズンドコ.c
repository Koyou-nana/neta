#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

char* zundoko2(int num, char* zundoko);

int result3(int* num);

void main()
{
    int temp, i, result2;
    int result[] = {0, 0, 0, 0, 0};
    char Enter[100];
    char zundoko[100] = "結果：";
    printf("乱数取得中...15秒くらいかかります\n");
    for (i = 0; i < 5; i++)
    {
        srand(time(NULL));
        temp = rand()%2;
        result[i] = temp;
        zundoko2(temp, zundoko);
        printf("%d/5 完了\n", i);
        Sleep(3000);
    }
    result2 = result3(result);
    printf("%s\n", zundoko);
    if (result2 == 1){
        printf("きよし\n");
        gets(Enter);
    } else {
        gets(Enter);
    }
}

char* zundoko2(int num, char* zundoko)
{
    if (num == 0)
    {
        strcat(zundoko, "ズン");
    } else if (num == 1)
    {
        strcat(zundoko, "ドコ");
    }
    return zundoko;
}

int result3(int* num)
{
    int ok[] = {0, 0, 0, 0, 1};
    int ok2;
    if (num == ok)
    {
        ok2 = 1;
    } else 
    {
        ok2 = 0;
    }
    return ok2;
}