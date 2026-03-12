/*[2 1 5] 1 3 2   sum = 8
 2 [1 5 1] 3 2  sum = 7
 2 1 [5 1 3] 2  sum = 9  ← MAX
 2 1 5 [1 3 2]  sum = 6  */



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k,n,i,j,sum=0,max_sum=0;
    
    scanf("%d",&n);
    if(n<0)
    {
        printf("No of elements are invalid");
        return 0;
    }
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    
        for(j=0;j<=k;j++)
        {
            for(i=j;i<k+j;i++)
            {
                if(i!=n)
            sum+=arr[i];
            }
            if(sum>max_sum)
            max_sum=sum;
            
            sum=0;
        }
    
    printf("%d ",max_sum);
}




