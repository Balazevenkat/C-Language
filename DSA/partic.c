#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct node
{
    int data;
    struct node *next; 
}NODE;

NODE *head=NULL;

NODE *creat_node(int n)
{
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    
    newnode->data=n;
    newnode->next=NULL;
    
    return newnode;
}

void insert_end(int val)
{
    NODE *node=creat_node(val);
    
    if(head==NULL)
    {
        printf("\nThis is first node...\n");
        node->next=head;
        head=node;
        return;
    }
    NODE *tem=NULL;
    
    tem=head;
    
    while(tem->next)
    {
        tem=tem->next;
    }
    
    tem->next=node;
}

void remove_dup()
{
    int flag=0;
    NODE *tem=head;
    
    if(tem==NULL)
    {
        return;
    }
    
    while(tem)
    {
        NODE *prev=tem;
        NODE *tem1=tem->next;
        while(tem1)
        {
            if(tem->data==tem1->data)
            {
                //tem->next=tem1->next->next;
                prev->next=tem1->next;// here prev->next is indirectly tem->next updating
                free(tem1);
                tem1=prev->next;
               /* prev->next = tem1->next;
free(tem1);
tem1 = prev->next;*/
            }
            else
            {
                prev=tem1;
            tem1=tem1->next;
            }
        }
      tem=tem->next;
    }
}
int is_prime(int n)
{
    if(n<=0)
    return 0;
    
    if(n==2 || n==1)
    return 1;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        return 0;
    }
    
    return 1;
}
void prime_node()
{
    NODE *tem=head;
     NODE*ptr=NULL;
    while(tem)
    {
        if(is_prime(tem->data))
        {
            if(ptr==NULL)
            {
                head=tem->next;
                free(tem);
                tem=head;
            }
            else{
            ptr->next=tem->next;
            free(tem);
            tem=ptr->next;
            }
        }
        else
        {   ptr=tem;
            tem=tem->next;
        }
    }
}

void display_node()
{
    NODE *tem=NULL;
    tem=head;
    
    if(tem==NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    
    while(tem)
    {
        printf("%d ->",tem->data);
        tem=tem->next;
    }
    printf("NULL\n");
}

int main()
{
    char c;
    
    while(1)
    {
        printf("opt: 1.insert_end 2.display 3.remove_dup 4.quit\n");
        scanf("%c",&c);
        
        switch(c)
        {
            case '1':
            int n;
            scanf("%d",&n);
            insert_end(n);
            break;
            
            case '2':
            display_node();
            break;
            
            case '3':
            remove_dup();
            break;
            
            case 'p':
            prime_node();
            break;
            
            case '4':return 0;
            
            default:printf("inavalid...\n");
            break;
        }
    }
}
