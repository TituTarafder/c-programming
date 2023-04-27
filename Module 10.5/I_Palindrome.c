#include <stdio.h>
#include <stdlib.h>
#include<string.h> 

int main(void)
{
    char s[1001];
    int count=0;
    scanf("%s",&s);
    int ln=strlen(s);
    int j=ln-1;
 for(int i=0;i<ln/2;i++){
        if(s[j]==s[i]){
           count++;
        }
        else{
            printf("NO\n");
            break;
        }
        j--;
    }
    if(count==(ln/2)){
        printf("YES\n");
    }



   
    return 0;
}
