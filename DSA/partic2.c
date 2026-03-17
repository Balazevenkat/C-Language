#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}NODE;

NODE *head=NULL;

NODE*creat_node(int val)
{
    NODE *newnode=(NODE*)calloc(1,sizeof(NODE));
    
    newnode->data=val;
    newnode->next=NULL;
    
    return newnode;
}

void insert_end(int num)
{
    NODE *node=creat_node(num);
    
    if(head==NULL)
    {
        printf("This is first node %d",num);
        node->next=head;
        head=node;
        return;
    }
    NODE*tem=head;
    
    while(tem->next)
    {
        tem=tem->next;
    }
    tem->next=node;
}

int is_prime(int n)
{
    if(n<=1)
    return 0;
    
    if(n==2)
    return 1;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        return 0;
    }
    
    return 1;
}

NODE *reveres(NODE *cur)
{
    NODE*tem=NULL,*prev=NULL;
    while(cur)
    {
        tem=cur->next;
        cur->next=prev;
        prev=cur;
        cur=tem;
    }
    
    return prev;
}

void palidrom()
{
    NODE*slow=head;
    NODE*fast=head;
    
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    slow=reveres(slow);
    
    NODE*first=head;
    NODE*second=slow;
    
    while(first && second)
    {
        if(first->data != second->data)
        {
            printf("\n not palidrom..\n");
            reveres(slow);
            return;
        }
        
        second=second->next;
        first=first->next;
    }
    
    printf("\npalidrom...\n");
    reveres(slow);
    
}
void prime_list()
{
    NODE *tem=head;
    NODE *ptr=NULL;
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
          else
            {
                ptr->next=tem->next;
                free(tem);
                tem=ptr->next;
            }
        }
            else
            {
                ptr=tem;
                tem=tem->next;
            }
    }
}

void remove_duplicates()
{
    NODE*tem=NULL;
    
    if(head==NULL || head->next==NULL)
    {
        printf("list is invalid to remove duplicates\n");
        return;
    }
    tem=head;
    NODE*tem1=NULL,*ptr=NULL;
    while(tem)
    {
        ptr=tem;
        tem1=tem->next;
        while(tem1)
        {
            if(tem->data == tem1->data)
            {
                ptr->next=tem1->next;
                free(tem1);
                tem1=ptr->next;
            }
            else
            {
                ptr=tem1;
                tem1=tem1->next;
            }
        }
        tem=tem->next;
    }
}

void sort_list()
{
    NODE *ptr=head;
    NODE*lptr=NULL;
    int tem=0,swap;
    
    do{
        swap=0;
        ptr=head;
        while(ptr->next != lptr)
        {
            if(ptr->data > ptr->next->data)
            {
                tem=ptr->data;
                ptr->data=ptr->next->data;
                ptr->next->data=tem;
                swap=1;
            }
            ptr=ptr->next;
        }
        lptr=ptr;
    }while(swap);
}

void revers_list()
{
    NODE *ptr=head;
    if(head==NULL || head->next==NULL)
    {
        printf("invalid to revers..\n");
        return;
    }
    NODE*prev=NULL,*tem=NULL;
    while(ptr)
    {
        tem=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=tem;
    }
    head=prev;
}

void display()
{
    if(head==NULL)
    {
        printf("List is empty...\n");
        return;
    }
    
    NODE*tem=head;
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
     printf("\n opt:1.insert_end 2.display 3.remove_duplicates\n");
     printf("4.sort_list 5.revers_list 6.palidrom 7.prime_list 8.quit\n");
     scanf(" %c",&c);
     switch(c)
     {
        case '1':
        int num;
        scanf("%d",&num);
        insert_end(num);
        break;
        
        case '2':
        display();
        break;
        
        case '3':
        remove_duplicates();
        break;
        
        case '4':
        sort_list();
        break;
        
        case '5':
        revers_list();
        break;
        
        case '6':
        prime_list();
        break;
        
        case '7':
        palidrom();
        break;
        
        case '8':
        return 0;
     }
    }
}
