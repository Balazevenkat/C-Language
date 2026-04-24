#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'|c=='u')
    return 1;
    
    return 0;
}

int is_word_vowel(char *str)
{
    int flag=0;
    char *ptr=str;
      if(is_vowel(*ptr))
      {
          flag=1;
      }
      
      while(flag==1 && *ptr)
      {
          ptr++;
      }
      
      if(is_vowel(*(ptr-1)))
      return 1;
      else
      return 0;
      
}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    
    int found=1;
    char *ptr=str;
    
    ptr=strtok(str," ");
    
    while(ptr)
    {
        if(is_word_vowel(ptr))
        {
        found=0;    
        puts(ptr);
        }
        ptr=strtok(NULL," ");
    }
   if(found) 
   printf("not found");
}
