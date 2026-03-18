#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,cout=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    for(int i=31;i>=0;i--)
    {
        if(((num>>i)&1)==1)
        {
            break;
        }
        cout++;
    }
    for(int i=31;i>=0;i--)
    printf("%d ",(num>>i)&1);
    
    printf("\nleading zeros: %d",cout);
}
