

#include <stdio.h>
#include<string.h> 

int main()
{   
    int T;
    scanf("%d",&T);

  for(int i=0;i<T;i++){
    char s[101];
    scanf("%s",s);
    
    int ln=strlen(s);
      if(ln<=10){
        printf("%s\n",s);}
    else{
       
       printf("%c%d%c\n",s[0],ln-2,s[ln-1]);
     
    }
   
  }
    
    return 0;
}
