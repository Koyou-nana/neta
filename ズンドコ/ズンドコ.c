#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

char* zundoko2(int num, char* zundoko);

int result3(int* num);

void main()
{
    int temp, i, result2, sleep;
    int result[] = {0, 0, 0, 0, 0};
    char Enter[100];
    char zundoko[100] = "結果：";
    sleep = 1000;
    printf("乱数取得中...15秒くらいかかります\n");
    for (i = 0; i < 5; i++)
    {
        srand(time(NULL));
        temp = rand()%2;
        result[i] = temp;
        zundoko2(temp, zundoko);
        printf("%d/5 完了\n", i);
        Sleep(sleep);
        sleep += 1000;
    }
    printf("5/5 完了\n");
    result2 = result3(result);
    printf("%s\n", zundoko);
    if (result2 == 5){
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
    int ok2, i, n, m;
    ok2 = 0;
    for (i = 0; i < 5; i++)
    {
        n = num[i];
        m = ok[i];
        if (n == m){
            ok2++;
        }
    }
    return ok2;
}