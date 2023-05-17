
/*浮点数类型 float double 与整数类型 int 的读取与输出*/

#include <stdio.h>
int main()
{

   int c,d;
   printf("please enter two keys\n");
   scanf("%d %d",&c,&d);
   printf("%d+%d=%d\n",c,d,c+d);

   float e,f;
   printf("please enter two keys\n");
   scanf("%f %f",&e,&f);
   printf("%f/%f=%f\n",e,f,e/f);
   

   double a,b;
   printf("please enter two keys\n");
   scanf("%lf %lf",&a,&b); /*  scanf 提取浮点数用%lf  */
   printf("%f/%f=%f\n",a,b,a/b);
   


   return 0;
}