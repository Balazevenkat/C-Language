
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		printf("supplied zero");
		return 0;
	}
	int cnt=0;
	for(int i=31; i>=0; i--)
	{
		if((n>>i)&1 == 1 && (n>>(i-1))&1 == 1)
			cnt++;
		i--;//skip forward two pair

	}

	if(cnt==0)
		printf("no pair of set bits");
	else
		printf("%d",cnt);
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);


	if(n==0)
	{
		printf("you supplied zero");
		return 0;
	}
	for(int i=31; i>=0; i--)
	{
		if(i==1||i==3||i==5||i==7||i==9)
		{
			n&=~(1<<i);
		}
	}

	printf("%d",n);
}


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);



	for(int i=31; i>=0; i--)
	{
		if(i==1||i==3||i==5||i==7||i==9)
		{
			n|=(1<<i);
			//n&=~(1<<i);
		}
	}

	printf("%d",n);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int rig=0,lef=31; lef>=rig; lef--,rig++)
	{
		if(((n>>lef)&1) != ((n>>rig)&1))
		{
			n^=(1<<lef);
			n^=(1<<rig);
		}
	}

	for(int i=31; i>=0; i--)
	{
		printf("%d",((n>>i)&1));
	}
	printf("\n%d",n);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,n;
    scanf("%d",&num);
   
   int hig=0,low=9;
   if(num<0)
   {
       n=-num;
   }
   else
   n=num;
   
   while(n)
   {
       if(hig<(n%10))
       {
           hig=(n%10);
       }
       if((n%10)<low)
       {
           low=(n%10);
       }
       n/=10;
   }
   
   if(hig==low)
   {
       printf("All digits are same");
       return 0;
   }
   printf("highest=%d ",hig);
   printf("lowest=%d\n",low);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,n;
    scanf("%d",&num);
    
   if(num<0)
   {
       n=-num;
   }
   else
   n=num;
   
   int flag=1;
   while(n)
   {
       int tem=(n%10);
       if((tem%2)!=0)
       {
        flag=0;
       printf("%d ",tem);
       }
       n/=10;
   }
   
   if(flag)
   {
   printf("no odd digits");
   return 0;
   }
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int hig=0,shig=-1,flag=1;
    int num,n;
    scanf("%d",&num);
    
   if(num<0)
   {
       n=-num;
   }
   else
   n=num;
   
   if(n<=9)
   {
       printf("you have supplied single digit only");
       return 0;
   }
 
  
   hig=0,shig=-1;
   while(n)
   {
       if(hig<(n%10))
       {
           shig=hig;
           hig=(n%10);
       }
       
       if(hig>(n%10) && (n%10)>shig)
       {
           flag=0;
           shig=(n%10);
       }
       
       n/=10;
   }
   
   if(shig==0 && flag)
   {
       printf("all digits are same");
       return 0;
   }
   printf("%d",shig);
}

#include<stdio.h>
#include<stdlib.h>

int sum_dig(int n)
{
    int res=0;
   
   while(n>=10)
   {
       res=0;
       
       while(n)
       {
          res+=(n%10);
          
          n/=10;
       }
       n=res;
   }
    
    return res;
}

int main()
{
    int min,max;
    scanf("%d %d",&min,&max);
    
    if(min>max || min<0)
    {
        printf("invalid range");
        return 0;
    }
    
    for(int i=min;i<=max;i++)
    {
        if(sum_dig(i)==9)
        printf("%d ",i);
        
    }
    
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int d,num,cnt,tem,found=0;
    num=n;tem=n;
    
    while(num)
    {
        d=num%10;
        n=tem;
         cnt=0;
        while(n)
        {
            if(d==(n%10))
            cnt++;
            
            n/=10;
        }
        if(cnt==1)
        {
        printf("%d ",d);
        found=1;
        }
        num/=10;
    }
    
   if(found!=1)
   {
       printf("no non-repeated numbers");
   }
}

#include<stdio.h>
#include<stdlib.h>

void places_zeros(int *arr,int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
        arr[j]=arr[i];
        j++;
        }
    }
    
    for(i=j;i<n;i++)
    arr[i]=0;
}

int main()
{
    int n;
    scanf("%d",&n);
    
    if(n<=0)
    {
        printf("invalid size");
        return 0;
    }
    
    if(n>100)
    {
    printf("MemoryOverflow");
    return 0;
    }
    
    int *arr=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    places_zeros(arr,n);
    
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int flag,n;
    scanf("%d",&n);
    
    if(n<=0)
    {
        printf("invalid size");
        return 0;
    }
    
    int *arr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
     
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(arr[i]>arr[j])
             {
             flag=1;
             }
             else
             {
             flag=0;
             break;
             }
         }
         
         if(flag==1)
         printf("%d ",arr[i]);
     }
     
    // printf("%d",arr[n-1]);
    
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,found,cnt=0,flag=1;
    scanf("%d",&n);
    
    if(n<=0)
    {
        printf("invalid size");
        return 0;
    }
    
    if(n>100)
    {
        printf("MemoryOverflow");
        return 0;
    }
    int *arr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        found=1;
        
        if(cnt>1)
        {
        for(int k=0;k<i;k++)
        {
            if(arr[k]==arr[i])
            {
            found=0;
            break;
            }
        }
        }
        if(found==1 && cnt>1)
        {
            printf("%d ",arr[i]);
            flag=0;
        }
    }
    
    if(flag==1)
    {
        printf("no repeated elements");
    }
    
}
#include<stdio.h>
#include<stdlib.h>

void shift_left(int *arr,int n)
{
    int i;
    for( i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=0;
}

void shift_rig(int *arr,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("No of elements are invalid");
        return 0;
    }
    int *arr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    char c;
    int shift;
    scanf(" %c",&c);
    scanf("%d",&shift);
    
    for(int i=0;i<shift;i++)
    {
        if(c=='l')
        {
            shift_left(arr,n);
        }
        else
        {
            shift_rig(arr,n);
        }
    }
    
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    
    
}

#include<stdio.h>
#include<stdlib.h>

void rorate_left(int *arr,int n)
{
    int i,first;
    first=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=first;
}

void rorate_rig(int *arr,int n)
{
    int j,last;
    
    last=arr[n-1];
    for(int j=n-1;j>=0;j--)
    {
        arr[j]=arr[j-1];
    }
    
    arr[0]=last;
    
}

int main()
{
    int n;
    scanf("%d",&n);
    
    if(n==0)
    {
     printf("invalid size");
        return 0;
    }
    
    if(n<0)
    {
        printf("No of elements are invalid");
        return 0;
    }
    
    int *arr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int shift;char c;
    scanf(" %c",&c);
    scanf("%d",&shift);
    
    for(int i=0;i<shift;i++)
    {
        if(c=='l')
        {
            rorate_left(arr,n);
        }
        else
        {
            rorate_rig(arr,n);
        }
    }
    
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    
    
}


#include<stdio.h>
#include<stdlib.h>

int sub_con(int arr[],int index)
{
    int sum=0;
    for(int i=0;i<index;i++)
    {
        sum+=arr[i];
    }
    
    return sum;
}


int main()
{
    int n,k,*arr;
    
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("No of elements are invalid");
        return 0;
    }
    if(n>101)
    {
        return 0;
    }
    
    arr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    
    scanf("%d",&k);
    
    int sum=0,res=0,index;
    for(int i=0;i<=n-k;i++)//  if k=3, i reaching up to 3 means enogh so n-k [1,2,3,4,5,6]
    {
        res=sub_con(arr+i,k);
        
        if(res>sum)
        {
         sum=res;
         index=i;
        }
    }
    
    printf("%d",sum);
    
   /* printf("[");
    for(int j=index;j<((n-1)-index);j++)
    {
        printf("%d, ",arr[j]);
    }
    printf("]\n");*/
}


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    if(n<=0)
    {
        printf("invalid size");
        return 0;
    }
    if(n>50)
    {
        printf("Memory Overflow");
        return 0;
    }
    
    int *arr=NULL;
    arr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    int cnt=0,found=0;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        
        if(cnt==1)
        {
            
        found=1;
        printf("%d ",arr[i]);
        }
        
    }
    
    if(found==0)
    printf("no non-repeated elements");
    
    
}

