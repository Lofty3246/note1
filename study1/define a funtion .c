/*定义和调用函数*/

#include <stdio.h>

void br();
void deny();/*告知编译器调用该函数*/

int main()
{
    /*调用函数*/
    br();
    br();
    br();
    deny();
}

void br() /*定义函数*/
{
    printf("okokokok\n");
}

void deny() /*定义函数*/
{
    printf("it's perfect");
}