/*声明char变量*/
/*查询字符常量的数字编码，
'A' 单引号 字符常量
 A  无引号 变量名
"A" 双引号 字符串        */
#include <stdio.h>
int main()
{
    
    char nut; 
    printf("please fill a letter.\n");
    scanf("%c",&nut);   /*%d 用于int类型?*/
   
    printf("The %c code is %d ",nut,nut);

    return 0;
}