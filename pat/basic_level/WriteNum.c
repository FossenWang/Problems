// https://pintia.cn/problem-sets/994805260223102976/problems/994805324509200384
// 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
// 输入格式：
// 每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100
// 输出格式：
// 在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
// 输入样例：
// 1234567890987654321123456789
// 输出样例：
// yi san wu


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[110] = {NULL}, *out[50] = {NULL};
    scanf("%s", &str);

    int i, sum = 0, len = strlen(str);
    for (i = 0; i < len; i++)
    {
        sum += str[i] - '0';
    }

    int k = 0;
    char *name[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    while (sum > 0)
    {
        i = sum % 10;
        out[k] = name[i];
        sum /= 10;
        ++k;
    }
    k--;

    while (k>0)
    {
        printf("%s ", out[k]);
        k--;
    }
    printf("%s", out[k]);
    return 0;
}
