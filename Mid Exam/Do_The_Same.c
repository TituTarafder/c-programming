#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int j=0;j<k;j++){
        for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    printf("\n");
    }
    
    return 0;
}
