#include<stdio.h> 
int main(){
    int n;
    scanf("%d",&n);
    int n2=n/1000;
    if(n2%2==0){
        printf("Even\n");
    }
    else printf("Odd\n");
}