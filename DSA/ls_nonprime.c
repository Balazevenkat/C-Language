#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<time.h>
typedef struct node{
  
  int data;
  struct node*next;
}NODE;

NODE*head=NULL;

NODE *create_node(int n)
{
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    
    newnode->data=n;
    newnode->next=NULL;
    
    return newnode;
}
int check_prime(int n)
{
    if(n==2)
    return 1;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    
    return 1;
}

void insert_at_end(int val)
{
    NODE *node=create_node(val);
    
    if(head==NULL)
    {
        printf("this first node:%d\n",node->data);
        node->next=NULL;
        head=node;

        return;
    }
    NODE *tem=NULL;
    tem=head;
    
    while((tem->next)!=NULL)
    {
        tem=tem->next;
    }
    
    tem->next=node;
}

void non_prime()
{
    NODE*cur=NULL;
    NODE*prev=NULL;
    NODE*tem=NULL;
    cur=head;
    if(cur==NULL)
    {
        printf("\nList is empty...\n");
        return ;
    }
     if(check_prime(cur->data))
            {
            head=cur->next;
            cur=head;
            }
    
    while(cur!=NULL)
    {
        if(check_prime(cur->data))//checking at prime
        {
            if(cur==head)//// deleting cur ,shift head
            {
                head=cur->next;
                free(cur);
                cur=head;
            }
            else     //// deleting middle / last
            {
            prev->next=cur->next; // NON-PRIME → keep
            free(cur);
            cur=prev->next;
            }
        }
        else
        {
            prev=cur;
            cur=cur->next;
        }
    }
}

void display_nodes()
{
    NODE*tem=NULL;
    
    tem=head;
    if(tem==NULL)
    {
        printf("List is empty...\n");
    }
    
    while(tem!=NULL)
    {
        printf("%d -> ",tem->data);
        tem=tem->next;
    }
    printf("None\n");
}
int main()
{
    int arr[5];
    srand(time(NULL));
    for(int i=0;i<5;i++)
    {
        arr[i]=rand()%(10-1+1)+1;
        
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                i--;
                break;
            }
        }
    }
    
    for(int i=0;i<5;i++)
    insert_at_end(arr[i]);
    
    display_nodes();
    
    printf("\n (non-prime)LIST: \n");
    
    non_prime();
    
    printf("\n");
    display_nodes();
    
    return 0;
}
