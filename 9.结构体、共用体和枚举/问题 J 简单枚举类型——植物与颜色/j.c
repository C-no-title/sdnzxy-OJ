#include<stdio.h>
#include<string.h>
enum Color
{
    red,orange,yellow,green,blue,violent
};

int main(void)
{
    enum Color color;
    char a[100];
    while(scanf(" %s",&a)!=EOF)
    {
        color=-1;
        if(strcmp(a,"red")==0)
            color=0;
        else if(strcmp(a,"orange")==0)
            color=1;
        else if(strcmp(a,"yellow")==0)
            color=2;
        else if(strcmp(a,"green")==0)
            color=3;
        else if(strcmp(a,"blue")==0)
            color=4;
        else if(strcmp(a,"violent")==0)
            color=5;

        switch(color)
        {
        case red:
            printf("Rose are red.\n");
            break;
        case orange:
            printf("Poppies are orange.\n");
            break;
        case yellow:
            printf("Sunflower are yellow.\n");
            break;
        case green:
            printf("Grass are green.\n");
            break;
        case blue:
            printf("Bluebells are blue.\n");
            break;
        case violent:
            printf("Violets are violent.\n");
            break;
        default:
            printf("I don't know about the color %s.\n",a);

        }

    }
    return 0;
}
