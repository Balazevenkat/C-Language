#include<stdio.h>
void float_binary(float *n)
{
    int *ptr=(int*)n;
    for(int i=31;i>=0;i--)
    {
        printf("%d ",(*ptr>>i)&1);
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    
    for(int i=31;i>=0;i--)
    {
        printf("%d ",(num>>i)&1);
    }
    float n;
    printf("\nfloat:");
    scanf("%f",&n);
    
    float_binary(&n);
}
