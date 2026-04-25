#include<stdio.h>

//#define REV_CON(data,l,r) ( ((data>>l)&1) ^ ((data>>r)&1) )
#define REV_CON(data,l,r) ( ((data>>l)&1) != ((data>>r)&1) )

#define REV_LOG(data,l,r) \
    do { \
        data ^= (1 << l); \
        data ^= (1 << r); \
    } while(0)

int main()
{
    int data, l, r, i;
    scanf("%d", &data);

    for(l = 31, r = 0; l > r; l--, r++)
    {
        if(REV_CON(data, l, r))
        {
            REV_LOG(data, l, r);
        }
    }

    for(i = 31; i >= 0; i--)
        printf("%d", (data >> i) & 1);

    printf(" %d\n", data);
}
