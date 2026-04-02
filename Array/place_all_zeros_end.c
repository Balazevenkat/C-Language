#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*void place_zeros_end(int *arr,int n)
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
*/
void place_zeros_end(int *arr,int index)
{
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

int main()
{
    int *arr;
    int n;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    place_zeros_end(arr,n);
    
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
