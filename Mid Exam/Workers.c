#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);
    d=((m1*d)/m2);
    printf("%d",d);
    return 0;
}
