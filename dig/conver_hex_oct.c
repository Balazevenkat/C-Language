#include<stdio.h>

int main()
{
    int num, n, i=0;
    scanf("%d",&num);

    if(num == 0)
    {
        printf("0\n0x0");
        return 0;
    }

    char oct[12];
    n = num;

    while(n)
    {
        oct[i++] = n % 8 + '0';
        n /= 8;
    }

    for(int j=i-1;j>=0;j--)
        printf("%c",oct[j]);

    printf("\n");

    char hex[8];
    i = 0;
    n = num;

    while(n)
    {
        int r = n % 16;

        if(r < 10)
            hex[i++] = r + '0';
        else
            hex[i++] = r - 10 + 'A';

        n /= 16;
    }

    printf("0x");
    for(int j=i-1;j>=0;j--)
        printf("%c",hex[j]);

    return 0;
}
