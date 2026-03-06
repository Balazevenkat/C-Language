#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sorted_string(char *p)
{
   char *i,*j,temp;

    for(i=p; *(i+1); i++)//i++ increates
    {
        for(j=i+1; *j; j++)// j++ adjcent j also increments
        {
            if(*i > *j)  //check the asc or des
            {
                temp=*i;
                *i=*j;
                *j=temp;
            }
        }
    }
    
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    sorted_string(str);
    
    puts(str);
}
