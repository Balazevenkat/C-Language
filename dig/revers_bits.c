#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    
    for(int i=31;i>=0;i--)
    printf("%d ",(num>>i)&1);
    
    printf("\n");
    
    for(int lef=31,rig=0;lef>=rig;lef--,rig++)
    {
        if(((num>>lef)&1) != ((num>>rig)&1))
        {
            num^=(1<<lef);
            num^=(1<<rig);
        }
    }
    
    for(int i=31;i>=0;i--)
    printf("%d ",(num>>i)&1);
    
    printf("\n%d ",num);
}
