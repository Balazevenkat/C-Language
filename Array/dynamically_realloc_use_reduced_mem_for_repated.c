#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;//take 9 to statify the tem arry for the memcpy
    scanf("%d",&n);
    
    int *arr=(int*)malloc(n*sizeof(int));
    
    int tem[]={1,1,2,4,4,6,7,9,9};
    
    memcpy(arr,tem,sizeof(tem));
   /* for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);*/
    
    for(int i=0;i<n;i++)
    printf("%d ",&arr[i]);//print's address series of the arr dynamic.. 
    
    printf("\n******************************************************************\n");
    
     int s=sizeof(arr);//why 8?pointer
      
      printf("pointer: %d\n",s);
      
       printf("Initial size(bytes): %d\n", n * (int)sizeof(int));
      
      for(int i=0;i<n;i++)
    printf("%d ",arr[i]);  
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;)
        {
            if(arr[i]==arr[j])
            {
                memmove(&arr[j],&arr[j+1],(n-1-j)*sizeof(int));
                n--;
                //arr=realloc(arr,n*sizeof(int));   risky to use in loop
            }
            else{
                j++;
            }
        }
    }
    
    arr=realloc(arr,n*sizeof(int));
    
    printf("\n******************************************************************\n");
      
      s=sizeof(arr);
      
      printf("poniter: %d\n",s);//why 8? pointer size
      
       printf("Initial size(bytes): %d\n", n * (int)sizeof(int));
      
      for(int i=0;i<n;i++)
    printf("%d ",arr[i]); 
    
}







