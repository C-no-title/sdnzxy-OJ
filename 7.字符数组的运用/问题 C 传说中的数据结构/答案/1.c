#include<stdio.h>
#include<string.h>
int main()
{
    int T, i, n ;
    int stack[1000] ;
    char str[1000] ;
    while(scanf("%d",&T)!=EOF)
    {
       int top = 0;
       for(i=0; i<T; i++)
       {
           scanf("%s",str) ;
           if(strcmp(str, "push")==0)
           {
               scanf("%d", &n) ;
               stack[top++] = n ;
           }
           else
           if(strcmp(str, "pop")==0)
           {

               if(top==0)
                {
                    printf("error\n") ;
                    continue ;
                }
                else
                stack[top--] ;
           }
           else
           if(strcmp(str, "top")==0)
           {
               if(top==0)
               {
                   printf("empty\n") ;
                   continue ;
                }
               else
                   printf("%d\n", stack[top-1]) ;
           }
       }
        printf("\n") ;
    }
    return 0 ;
}
