#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node*next;//=NULL;
}NODE;

NODE *head=NULL;

NODE *create_new_node(int n)
{
    NODE *node=(NODE*)calloc(1,sizeof(NODE));
    
    node->data=n;
    node->next=NULL;
    
    return node;
}

void insert_at_beging()
{
    int val;
    printf("\n**********(Enter val)**************\n");
    scanf("%d",&val);
    printf("\n************************\n"); 
    NODE *node=create_new_node(val);
    if(head==NULL)
    {
        printf("\nThis is first node in list\n");
        node->next=head;
        head=node;
        return;
    }
    
    node->next=head;
    head=node;
}

void delete_duplicate()
{
    NODE *tem=NULL;
    tem=head;
    
    if(tem==NULL)
    return;
    
    NODE *cur=head;
    NODE *run=NULL;
    
    while(cur)
    {
        run=cur;
        while(run->next != NULL)
        {
            if(run->next->data==cur->data)
            {
                NODE *tem=run->next;
                run->next=run->next->next;
                free(tem);
            }
            else
            run=run->next;
        }
        cur=cur->next;
    }
}

void insert_at_end()
{
    int val;
    printf("\n**********(Enter val)**************\n");
    scanf("%d",&val);
    printf("\n************************\n");
    
    NODE *node=create_new_node(val);
    
    if(head==NULL)
    {
        printf("\nThis is first node in list\n");
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

void display_nodes()
{
    NODE *tem=NULL;
    tem=head;
    
    if(tem==NULL)
    {
        printf("\nList is empty\n");
        exit(0);
    }
    while(tem)
    {
        printf("%d -> ",tem->data);
        tem=tem->next;
    }
    
    printf("NULL\n");
}

int main()
{
    
    char c;
    while(1)
    {
        printf("b:insert beging, i: insert value, d: display list, q:quit\n");
        
        scanf(" %c",&c);
        
        switch(c)
        {
            case 'i':insert_at_end();
            break;
            case 'd':display_nodes();
            break;
            case 'b':insert_at_beging();
            break;
            case 'r':delete_duplicate();
            break;
            case 'q':exit(0);
        }
    }
}
