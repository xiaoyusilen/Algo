//
// Created by xiaoyusilen on 2017/7/9.
//

// 全组合
//#include<stdio.h>
//#include<string.h>
//void Combination(char *str)
//{
//    if(str == NULL)
//        return ;
//    int len = strlen(str);
//    int n = 1<<len;
//    for(int i=1;i<n;i++)    //从 1 循环到 2^len -1
//    {
//        for(int j=0;j<len;j++)
//        {
//            int temp = i;
//            if(temp & (1<<j))   //对应位上为1，则输出对应的字符
//            {
//                printf("%c",*(str+j));
//            }
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    char str[] = "abc";
//    Combination(str);
//    return 0;
//}

// 全组合变形，已知n，输出n位所有二进制数。
#include<stdio.h>
#include<string.h>
void Combination(int len)
{
    int n = 1<<len;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<len;j++)
        {
            int temp = i;
            if(temp & (1<<j))
            {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
}
int main()
{
    int len;
    scanf("%d", &len);
    Combination(len);
    return 0;
}