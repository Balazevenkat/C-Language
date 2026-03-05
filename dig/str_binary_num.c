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

    printf("res: %d", res);
}
