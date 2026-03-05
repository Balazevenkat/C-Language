/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50];
    char *ptr=str;
    fgets(ptr,50,stdin);
    ptr[strlen(ptr)-1]='\0';
    
    //ptr=str[strlen(ptr)-1];
    ptr = ptr + strlen(ptr) - 1;
    int base=1,res=0;
    while(*ptr)
    {
        if(*ptr=='0' || *ptr=='1')
        {res+=base * (*ptr-'0');
          base*=2;
        }
        else
        break;
        
        ptr--;
    }
    
    printf("res: %d",res);
}*/


#include<stdio.h>
#include<string.h>

int main()
{
    char ptr[50];
    fgets(ptr, 50, stdin);
    ptr[strlen(ptr)-1] = '\0';

    char *p = ptr;   // pointer to array
    int res = 0;

    while(*p)
    {
        if(*p == '0' || *p == '1')
        {
            res = res * 2 + (*p - '0');
        }
        else
            break;

        p++;   // ✅ valid
    }
    /*   ptr = ptr + strlen(ptr) - 1;
    int base=1,res=0;
    while(*ptr)
    {
        if(*ptr=='0' || *ptr=='1')
        {res+=base * (*ptr-'0');
          base*=2;
        }
        else
        break;
        
        ptr--;
    }*/

    printf("res: %d", res);
}
