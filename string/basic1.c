/*Why this is wrong?

ptr = realloc(ptr, size+1);

Answer:
If realloc fails → returns NULL → original pointer lost → memory leak.

Safer way:

char *temp = realloc(ptr,size+1);
if(temp)
    ptr = temp;
*/
/*char *start = NULL;
char *ptr = NULL;
char c;
int size = 0;

while((c = getchar()) != '\n')
{
    start = realloc(start, size + 1);
    ptr = start + size;

    *ptr = c;

    size++;
}

start = realloc(start, size + 1);
*(start + size) = '\0';

printf("%s", start);*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr = NULL;
    char *start = NULL;
    char c;
    int size = 0;

    while((c = getchar()) != '\n')
    {
        ptr = realloc(ptr, size + 1);
        ptr[size] = c;
        size++;
    }

    ptr = realloc(ptr, size + 1);
    ptr[size] = '\0';

    printf("Stored string: %s\n", ptr);

    free(ptr);
}
