#include <stdio.h>
#include <stdlib.h>

int main(void)
{   int n,countEven=0,countOdd=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            countEven++;
        }
        
        else{
            countOdd++;
        }
        
    }

    printf("%d %d\n",countEven,countOdd);
    
    return 0;
}
