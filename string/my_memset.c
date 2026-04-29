#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *my_strchr(char*str,char c)
{
    while(*str!=c)
    str++;
    
    return str;
}

char *my_strrchr(char*str,char c)
{
    char *ptr;
    while(*str)
    {
        if(*str==c)
        ptr=str;
        
        str++;
    }
    
    return ptr;
}

int my_strlen(char *str)
{
    int cnt=0;
    while(*str)
    {
        str++;
     cnt++;   
    }
    
    return cnt;
}

char *my_strstr(char*str, char *sub)
{
    int flag=0;
    while(*str)
    {
        if(*str==*sub)
        {
            char *s=sub,*p=str;
            while(*s && *p && (*p==*s))
            {
                s++;
                p++;
            }
            
            if(*s=='\0')
            return str;
        }
        str++;
    }
    
    return NULL;
}

void *my_memset(char *str,char c,int n)
{
    int i=0;
    while(i<n)
    {
        *str=c;
        str++;
        i++;
    }
}

/*
//works on any datatype
void *my_memset(void *ptr, int c, int n)
{
    unsigned char *p = ptr;

    for(int i = 0; i < n; i++)
    {
        p[i] = (unsigned char)c;
    }

    return ptr;
}*/

int main()
{
  char str[100];
  fgets(str,100,stdin);
  str[strlen(str)-1]='\0';
  
  int size=sizeof(str);
  
  int len=my_strlen(str);
  
  printf("size:%d, length:%d\n",size,len);
  
  char*ptr=str;

 ptr=my_strchr(str,'l');
  printf("%s\n",ptr);
  
  ptr=NULL;
  
  ptr=my_strrchr(str,'l');

  printf("%s\n",ptr);
  
  char *sub;
  
  char s[20]="is";
  
  sub=my_strstr(str,s);
  
  printf("%s\n",sub);
  
  while(sub=my_strstr(str,s))
  {
  my_memset(sub,'*',strlen(s));
  
     sub+=strlen(s); 
  }
  printf("%s\n",str);
  
  
  
}
