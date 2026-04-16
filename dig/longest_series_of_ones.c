#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int cnt = 0, max = 0;

    for(int i = 31; i >= 0; i--)
    {
        if((n >> i) & 1)
        {
            cnt++;              // count consecutive 1s
            if(cnt > max)
                max = cnt;
        }
        else
        {
            cnt = 0;            // reset when 0 comes
        }
    }

    printf("%d", max);
}
