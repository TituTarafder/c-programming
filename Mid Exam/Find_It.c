#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,count=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
