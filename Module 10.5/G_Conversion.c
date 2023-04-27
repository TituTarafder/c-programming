#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
    char s[100001];
    gets(s);
    int ln=strlen(s);
    for(int i=0;i<ln;i++){
       if(s[i]==44){
        s[i]=32;

       }
       else{
        if(s[i]>='a'&&s[i]<='z'){
                s[i]=s[i]-32;
                }
        else{
            s[i]=s[i]+32;
        }
       }
       
       
    }
    printf("%s",s);
    return 0;
}
