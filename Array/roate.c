#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void place_zeros_end(int *arr,int index)
{
    index=index-1;
  for(int i=0;i<index;i++)//relfect here
  {
      if(arr[i]==0)
      {
          memmove(&arr[i],&arr[i+1],(index-i)*sizeof(int));
          arr[index--]=0;//decrement 
          i--;//recheck
      }
  }
}


void place_zeros_end(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++)
    arr[i]=0;
    
}

void shift_right(int arr[],int n)
{
    int last=arr[n-1];
    
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[0]=last;
}

void shift_left(int arr[],int n)
{
    int i,first=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=first;
}


void shift_rig(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=0;
}
void shift_lef(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i-1]=0;
}

int main()
{
    int arr[5];
    
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    
     for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
    
    printf("\n");
 //   place_zeros_end(arr,5);
   
   int shift;
   char c;
   printf("\n enter choies: ");
   scanf(" %c",&c);
   scanf("%d",&shift);
   
   
   for(int i=0;i<shift;i++)
   {
       if(c=='r')
       shift_right(arr,5);
       else
       shift_left(arr,5);
   }
   
   /*for(int i=0;i<shift;i++)
   {
       if(c=='r')
       shift_rig(arr,5);
       else
       shift_lef(arr,5);
   }*/
   
    
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
}
