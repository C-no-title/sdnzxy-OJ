#include<stdio.h>
#include<string.h>
#define N 15+1

int main(void)
{
    char str1[N],str2[N];
    fgets(str1,N,stdin);
    fgets(str2,N,stdin);
    if(str1[strlen(str1)-1]=='\n')
        str1[strlen(str1)-1]='\0';
    if(str2[strlen(str2)-1]=='\n')
        str2[strlen(str2)-1]='\0';
    if(strcmp(str1,str2)>0)
        printf("%s>%s",str1,str2);
    else if(strcmp(str1,str2)<0)
        printf("%s<%s",str1,str2);
    else
        printf("%s=%s",str1,str2);
    return 0;
}
