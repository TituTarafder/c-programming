#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // minimum finding
    int min=INT_MAX,pos1;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            pos1=i;
        }
    }
    //maximum finding
    int max=INT_MIN,pos2;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            pos2=i;
        }
    }

    //printf("%d %d\n",min,max);
    //printf("%d %d\n",pos1,pos2);
    
    arr[pos1]=max;
    arr[pos2]=min;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
