#include<stdio.h>

int main()
{
    int n = 8231547;
    int digits[10] = {0};

    int temp = n;

    while(temp)
    {
        digits[temp % 10] = 1;
        temp /= 10;
    }

    printf("Missing digits: ");
    for(int i=1; i<=9; i++)
    {
        if(digits[i] == 0)
            printf("%d ", i);
    }
}
