#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int my_strlen(char *ptr)
{
    int cnt=0;
    while(*ptr)
    {
        ptr++;
        cnt++;
    }
    
    return cnt;
}

void my_strcpy(char *des,char*src)
{
    while(*src)
    {
        *des=*src;
        
        src++;
        des++;
    }
    *des='\0';
    
}

void my_strcat(char*des,char*src)
{
    while(*des)
    des++;
    
    while(*src)
    {
        *des=*src;
        des++;
        src++;
    }
    
    *des='\0';
}
//if n in argumet  follow this
void my_strncpy(char* des, char* src, int n)
{
    int i=0;
    for(; i<n && src[i]; i++)
        des[i] = src[i];

   for(; i<n; i++)//to fill reamining buffer with null
        des[i] = '\0';
}

/*void my_strncpy(char*des,char*src,int n)
{
    int i=0;
    while(*src && i<n)
    {
        *des=*src;
        
        i++;
        des++;
        src++;
    }
    
    des[i]='\0';
}*/

char *my_strchr(char *str,char c)
{
    while(*str)
    {
        if(*str == c)
        return str;
        
        str++;
    }
    
    return NULL;
}

//follow this
void my_memset(char *ptr, char c, int n)
{
    for(int i=0; i<n; i++)
        ptr[i] = c;
}

/*void my_memset(char *ptr,char c,int n)
{
    int i=0;
    while(*ptr && i<n)
    {
        *ptr=c;
        
        i++;
        ptr++;
    }
}*/

char *my_strstr(char *str,char *sub)
{
    int flag=1;
    while(*str)
    {
        char *s=sub;
        char *ptr=str;
        if(*str == *s)
        {
            while(*ptr)
            {
                if(*ptr != *s)
                {
                break;
                }
                
                ptr++;
                s++;
            }
            if(*s=='\0')
            return str;
        }
        str++;
    }
    
    return NULL;
}

char *my_strtok(char *str,char *deli)
{
      static char*ptr=NULL;
      
      if(str!=NULL)
      ptr=str;
      
      if(ptr==NULL)
      {
      return NULL;
      }
      while(*ptr==*deli)
      ptr++;
      
      if(*ptr=='\0')
      {
          ptr=NULL;
          return NULL;
      }
      
     char *start=ptr;
     
     while(*ptr)
     {
         if(*ptr==*deli)
         {
             *ptr='\0';
             ptr++;
             return start;
         }
         
         ptr++;
     }
     
     ptr=NULL;
     
     return start;
      
}

void my_memmove(char*d,char *s,int n)
{
    
    if(d<s)
    {
         for(int i=0;i<n;i++)
         {
             d[i]=s[i];
         }
    }
    else
    {
       for(int i=n-1;i>=0;i--)
       {
           d[i]=s[i];
       }
    }
    
}

char *my_strrchr(char *str,char c)
{
    char *ptr=NULL;
    int flag=0;
    while(*str)
    {
        if(*str==c)
        {
            flag=1;
            ptr=str;
        }
        str++;
    }
    
    if(flag)
    return ptr;
    else
    return NULL;
}

int main()
{
    char *str="vector";
    
    int n1=sizeof(str);
    int n2=my_strlen(str);
    
    printf("%d %d\n",n1,n2);
    
    char s[10];
    
    my_strcpy(s,str);
    
    printf("%s\n",s);
    
    char *ptr="abc";
    my_strncpy(s,ptr,my_strlen(ptr)-1);
    
    printf("%s\n",s);
    
    
    my_strcat(s,ptr);
        printf("%s\n",s);

     
    char *s2="visualstdio.";
    
    s2=my_strchr(s2,'i');
    
    printf("%s\n",s2);
    
    
    char *s3="visualstdio.";
    
    s3=my_strrchr(s3,'i');
    
    printf("%s\n",s3);
    
    char line[50];
    fgets(line,50,stdin);
    line[my_strlen(line)-1]='\0';
    
    char sub[20];
    fgets(sub,20,stdin);
    sub[my_strlen(sub)-1]='\0';
    
    char *l=line;
   
    while(l=my_strstr(l,sub))
    {
        my_memset(l,'*',my_strlen(sub));
        l++;
    }
    
    printf("%s\n",line);
    
    
    
    l=line;
    
    l=my_strtok(l," ");
    
    while(l)
    {
        printf("%s\n",l);
        
        l=my_strtok(NULL," ");
    }
    
    printf("\n");
    
     char m1[]="this is nice man";
    char *m=m1;
    while(*m)
    {
        if(*m==' ')
        my_memmove(m,m+1,my_strlen(m+1)+1);
        
        m++;
    }
    
    puts(m1);
}
