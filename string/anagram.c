bbb
abb
{
  int count[256] = {0};
  /*
  This creates an array of size 256 (for all ASCII characters).
Every index represents a character.
All values are initially 0.
  */

for (int i = 0; s1[i]; i++)
    count[(unsigned char)s1[i]]++;

for (int i = 0; s2[i]; i++)
    count[(unsigned char)s2[i]]--;

for (int i = 0; i < 256; i++)
{
    if (count[i] != 0)
    {
        printf("Not anagram");
        return;
    }
}

printf("anagram");
}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void check_anagram(char *str1,char*str2)
{
    char *s1=str1,*s2=str2;//always pointer with tem pointer don't use original pointer directly for irriration
    int flag=0;
    while(*s1)
    {
        s2=str2;
        while(*s2)
        {
            if(*s1 == *s2)
            flag=1;
            
            s2++;
        }
        if(flag==0)
        break;
        
        s1++;
    }
    
    if(flag)
    printf("anagram");
    else
    printf("Not anagram");
    
}

int main()
{
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    str1[strlen(str1)-1]='\0';
    
    fgets(str2,100,stdin);
    str2[strlen(str2)-1]='\0';

    if(strlen(str1)!=strlen(str2))
    {
        printf("Not anagram...");
        return 0;
    }
    
    check_anagram(str1,str2);
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[30],str2[30];
    
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    
    fgets(str2,30,stdin);
    str2[strlen(str2)-1]='\0';
    
    if(strlen(str1)!=strlen(str2))
    {printf("Not an anagram strings");
    return 0;
    }
    
    int flag=1,found=1;
    char*str=str1;
    while(*str)
    {
        char *ptr=str2;
        while(*ptr)
        {
            if(*ptr==*str)
            {
            flag=1;    
            break;
            }
            else
            flag=0;
            
            ptr++;
        }
        
        if(flag==0)
        {
            found=0;
            printf("Not an anagram strings");
            break;
        }
       str++;
    }
    
    if(found)
    printf("Anagram strings");
    
    
    
}
