/***********************************************************
 *     FileName: foo.c
 *         Desc: 
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-09-05 14:43:01
 *      History:
 ***********************************************************/
#include <stdio.h>
extern int bar();
int main(void) {
    printf("foo.c\n");
    bar();
    return 0;
}
