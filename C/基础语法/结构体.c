/**
 * 此程序讨论结构体相关的问题
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct test
{
    int a;
}TEST_1;
/**
 * struct str1与struct str2的实际大小不一样
 * 是字节对齐的问题
*/
struct str1         //实际大小为sizeof(struct str1) = 6
{
    char a1;
    short a2;
    char a3;
};

struct str2         //实际大小为sizeof(struct str2) = 4
{
    char b1;
    char b2;
    short b3;
};

int main(void)
{
    struct test TEST_2;     //不行
    TEST_1 test__1;
    //TEST_2 test__2;       //这是错误的...
    test__1.a = 3;          //"."点号表示引用
    printf("%d\n", test__1.a);

    printf("%d,%d\n", sizeof(struct str1), sizeof(struct str2));
    system("pause");
    return 0;
}