#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*next;
}NODE;

NODE*head=NULL;

NODE *creat_node(int n)
{
    NODE*newnode=(NODE*)calloc(1,sizeof(NODE));
    
    newnode->data=n;
    newnode->next=NULL;
    
    return newnode;
}

void insert_beg(int val)
{
    NODE *node=creat_node(val);
    if(head==NULL)
    {
        printf("This is first node %d..\n",val);
        node->next=head;
        head=node;
        
        return;
    }
    
    node->next=head;
    head=node;
}

void insert_end(int num)
{
    NODE *node=creat_node(num);
    if(head==NULL)
    {
         printf("This is first node %d..\n",num);
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

void display()
{
    NODE*tem=head;
    
    if(tem==NULL)
    {
        printf("List is empty...\n");
        return;
    }
    
    while(tem)
    {
        printf("%d ->",tem->data);
        tem=tem->next;
    }
    
    printf("NULL\n");
}

void remove_dup()
{
    NODE*ptr=NULL;
    
    if(head==NULL || head->next==NULL)
    {
        printf("List invalid for remove...\n");
        return;
    }
    ptr=head;
    NODE*tem=NULL,*prev=NULL;
    while(ptr)
    {
        prev=ptr;
        tem=ptr->next;
        while(tem)
        {
            if(ptr->data==tem->data)
            {
                prev->next=tem->next;
                free(tem);
                tem=prev->next;
            }
            else
            {
                prev=tem;
                tem=tem->next;
            }
        }
        ptr=ptr->next;
    }
}
void revers_node()
{
    NODE *cur=head;
    NODE *prev=NULL;
    
    NODE*tem=NULL;
    while(cur)
    {
        tem=cur->next;
        cur->next=prev;
        prev=cur;
        cur=tem;
    }
    head=prev;
}
NODE *revers(NODE *cur)
{
    NODE*prev=NULL;
    NODE*tem=NULL;
    
    while(cur)
    {
        tem=cur->next;
        cur->next=prev;
        prev=cur;
        cur=tem;
    }
    return prev;
}

int is_prime(int n)
{
    if(n<=0)
    return 0;
    
    if(n==2)
    {
        return 1;
    }
    
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
    NODE *ptr=NULL;
    while(tem)
    {
        if(is_prime(tem->data))
        {
            if(ptr==NULL)
            {
            head=head->next;
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

void palidrom()
{
    NODE*slow=head;
    NODE*fast=head;
    
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    slow=revers(slow);
    
    NODE*first=head,*second=slow;
    
    while(first && second)
    {
        if(first->data != second->data)
        {
            printf("NOt a palidrom...\n");
            revers(slow);
            return;
        }
        second=second->next;
        first=first->next;
    }
    printf("Palidrom...\n");
    revers(slow);
    return;
}
void sort()
{
    NODE*ptr=head;
    NODE*lptr=NULL;
    int swap,tem=0;
    
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

int main()
{
    char c;
    while(1)
    {
        printf("1.insert_end 2.insert_beg 3.display 4.sort\n");
        printf("5.remove_dup 6.palidrom 7.revers 8.prime_node\n");
        printf("9.quit\n");
        scanf(" %c",&c);
        switch(c)
        {
            case '1':int num;
            scanf("%d",&num);
            insert_end(num);
            break;
            
            case '2':int n;
            scanf("%d",&n);
            insert_beg(n);
            break;
            
            case '3':display();
            break;
            
            case '4':sort();
            break;
            
            case '5':remove_dup();
            break;
            
            case '6':palidrom();
            break;
            
            case '7':revers_node();
            break;
            
            case '8':prime_node();
            break;
            
            case '9':return 0;
            
        }
    }
}
