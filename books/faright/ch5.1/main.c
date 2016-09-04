/***********************************************************
 *     FileName: main.c
 *         Desc: 输入一个字符串，删掉其中一个字符，输出处理后的字符串
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-09-04 10:56:19
 *      History:
 ***********************************************************/
#include <stdio.h>
int main(void) {
    char c;
    char str[20];
    enter_string(str);
    printf("The delete chr is: ");
    scanf("%c", &c);
    delete_string(str, c);
    print_string(str);
    return 0;
}
