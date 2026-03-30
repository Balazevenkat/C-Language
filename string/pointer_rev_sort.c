#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void sort_str(char *ptr)
{
    int n=strlen(ptr)-1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(*(ptr+j) > *(ptr+j+1))
            {
                *(ptr+j)^=*(ptr+j+1)^=*(ptr+j)^=*(ptr+j+1);
            }
        }
    }
    
}

void revers_str(char *str)
{
    char *lef=str,*rig=str+strlen(str)-1;
    while(lef<rig)
    {
        if(*lef!=*rig)
        *lef^=*rig^=*lef^=*rig;
        
        lef++;
        rig--;
    }
    
    printf("revers: %s\n",str);
}

int main()
{
    char str[100];
    
    fgets(str,100,stdin);//acbed
    str[strlen(str)-1]='\0';
    
    puts(str);
    printf("\n");
    
    sort_str(str);//abcde
    
    puts(str);
    
    revers_str(str);//edcba
}
