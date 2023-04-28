#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
int main(void)
{
    char s[1001];
    scanf("%s",s);
    int ln=strlen(s),count=0;
    for(int i=0;i<ln;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
