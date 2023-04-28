#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
    char s[1001];
    scanf("%s",s);
    int ln=strlen(s),countCap=0,countSm=0;
    for(int i=0;i<ln;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            countCap++;
        }
        else{
            countSm++;
        }
    }
    printf("%d %d",countCap,countSm);
    return 0;
}
