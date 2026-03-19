#include<stdio.h>
#include<string.h>

int my_strlen(char *ptr)
{
    int cnt=0;
    while(*ptr)
    {
        cnt++;
        ptr++;
    }
    return cnt;
}

void my_strcpy(char*src,char*des)
{
    while(*src)
    {
        *des=*src;
        des++;
        src++;
    }
    *des='\0';
}

void my_strcat(char *src,char *des)
{
    while(*src)
        src++;
    
    while(*des)
    {
        *src=*des;
         des++;
         src++;
    }
    *src='\0';
}

int my_strcmp(char *ptr,char *str)
{
    
    
     while(*str && *ptr)
     {
         
         if(*str != *ptr)
         return *ptr - *str;
         
         ptr++;
         str++;
     }
     
     return *ptr - *str;
}

void my_memmove(char *des,char*src,int n)
{
    if(des < src)
    {
    for(int i=0;i<n;i++)
    {
        des[i]=src[i];
    }
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            des[i]=src[i];
        }
    }
    
}

int main()
{
    
    char str1[30]="vector";
    
    char str2[10]="vector";
    
    //my_strcpy(str1,str2);
    
    //my_strcat(str1,str2);
    
    if(my_strcmp(str1,str2))
    {
        printf("differnt..\n");
    }
    else
    printf("same..\n");
    
    //my_memmove(str1+3,str2,5);
    
    //memmove(str1+3+my_strlen(str2),str1+3,my_strlen(str1+3)+1);
    //strncpy(str1+3,str2,5);
    //memmove(str1+3,str2,my_strlen(str2)+1);
      
    printf("%s",str1);
}
