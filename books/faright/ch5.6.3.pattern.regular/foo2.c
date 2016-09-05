/***********************************************************
 *     FileName: foo2.c
 *         Desc: 删除一个字符
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-09-04 10:59:14
 *      History:
 ***********************************************************/
int delete_string(char str[], char ch) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    return 0;
}
