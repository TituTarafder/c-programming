#include<stdio.h> 
int main(){
   int a,b,sum,sub,mul;
   double div;
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);
   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=(float)a/b;
   printf("%d+%d = %d\n",a,b,sum);
   printf("%d-%d = %d\n",a,b,sub);
   printf("%d*%d = %d\n",a,b,mul);
   printf("%d/%d = %0.2lf\n",a,b,div);
}
