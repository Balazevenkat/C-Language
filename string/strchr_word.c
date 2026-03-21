#include<stdio.h>
#include<string.h>

int main()
{
    char str[][10] = {"Hello", "live"}; // modifiable
    int i = 0;

    while(i < 2)
    {
        char *ptr = str[i];

        while((ptr = strchr(ptr, 'l')) != NULL)
        {
            *ptr = '*';
            ptr++; // move forward
        }

        printf("%s ", str[i]);
        i++;
    }
}
