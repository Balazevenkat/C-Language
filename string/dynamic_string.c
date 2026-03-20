#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void revers_arr(int *ptr,int size)
{
    int *lef=ptr,*rig=ptr+size-1;
    
    while(lef<rig)
    {
        if(*lef != *rig)
        {
            *lef^=*rig^=*lef^=*rig;
        }
        lef++;
        rig--;
    }
    
}

void revers_string(char *str)
{
    char *lef=str,*rig=str+strlen(str)-1;
    while(lef<rig)
    {
        if(*lef != *rig)
        {
            *lef^=*rig^=*lef^=*rig;
        }
        lef++;
        rig--;
    }
}

int main()
{
    int *arr=NULL;
    srand(time(NULL));
    int size;
    printf("Enter size(dynamic): ");
    scanf("%d",&size);
    arr=malloc(size*sizeof(int));
    
    
    for(int i=0;i<size;i++)
    {
        *(arr+i)=rand()%10+1;
        for(int j=0;j<i;j++)
        {
            if(*(arr+i) == *(arr+j))
            {
                i--;
                break;
            }
        }
    }
    
    for(int i=0;i<size;i++)
    printf("%d ",*(arr+i));
    
    printf("\n revers...\n");
    revers_arr(arr,size);
     for(int i=0;i<size;i++)
    printf("%d ",*(arr+i));
    
    printf("\n");
    char *str;
    int sz;
    printf("Enter size: ");
    scanf("%d",&sz);
    
    str=(char*)malloc(sz * sizeof(char));
    printf("\nEnter string: ");
    scanf("%s",str);
    
    revers_string(str);
    
    printf("revers...\n");
    puts(str);
    
    
}
