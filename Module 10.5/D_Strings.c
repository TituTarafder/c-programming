#include <stdio.h>
#include <stdlib.h>
#include<string.h> 

int main(void)
{
    char a[11];
    char b[11];
    gets(a);
    gets(b);
    int lna=strlen(a);
    int lnb=strlen(b);

    printf("%d %d\n",lna,lnb);
    printf("%s%s\n",a,b);
    char x;
    x=a[0];
    a[0]=b[0];
    b[0]=x;
    printf("%s %s",a,b);

    return 0;
}
