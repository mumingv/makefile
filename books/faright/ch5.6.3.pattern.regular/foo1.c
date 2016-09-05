/***********************************************************
 *     FileName: foo1.c
 *         Desc: 输入字符串
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-09-04 10:57:15
 *      History:
 ***********************************************************/
#include <stdio.h>
int enter_string(char str[20]) {
    printf("Input the string: ");
    gets(str);
    return 0;
}
