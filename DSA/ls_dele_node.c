#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct node{
    int data;
    struct node*next;
}NODE;

NODE *head=NULL;
NODE *create_node(int n)
{
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    
    newnode->data=n;
    newnode->next=NULL;
    
    return newnode;
}
void insert_end()
{
    int n;
    printf("ENter the value: ");
    scanf("%d",&n);
    
    NODE*node=create_node(n);
    
    if(head==NULL)
    {
        printf("\nthis first node:%d\n",node->data);
        node->next=NULL;
        head=node;
        
        return;
    }
    
    NODE *tem=NULL;
    
    tem=head;
    
    while((tem->next)!=NULL)
    tem=tem->next;
    
    tem->next=node;
    
}

void insert_at_pos()
{
    int p,len,n,cou=0;
    printf("\n Enter the Kth pos: ");
    scanf("%d",&p);
    
    NODE*tem=head;
    
    while(tem!=NULL)
    {len++;
     tem=tem->next;
    }
    
    if(len<p)
    {
        printf("out of range...\n");
        return;
    }
    printf("\nenter number:");
    scanf("%d",&n);
    NODE* node=create_node(n);
    
    tem=head;
    while(tem!=NULL)
    {
        if(cou==(p-1))
        {
          node->next=tem->next;
          tem->next=node;
          break;
        }
        cou++;
        tem=tem->next;
    }
    
}

void delete_node()
{
    printf("Enter the val to delet: ");
    int n;
    scanf("%d",&n);
    
    NODE*tem=head;
    
    if(tem->data==n)
    {
        head=tem->next;
        free(tem);
        return;
    }
    
    while(tem!=NULL)
    {
        if(tem->next->data==n)
        {
            tem->next=tem->next->next;
            return;
        }
        tem=tem->next;
    }
    
}


void display_nodes()
{
    NODE *tem=NULL;
    tem=head;
    
    if(tem==NULL)
    {
        printf("\nlist is empty..\n");
        return;
    }
    
    while(tem!=NULL)
    {
        printf("%d -> ",tem->data);
        tem=tem->next;
    }
    printf("Null\n");
}

int main()
{
    char c;
    while(1)
    {jump:
    printf("P:print q:quit i:inser\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'i':insert_end();
                 break;
        case 'p':display_nodes();
                 break;
        case 'k':insert_at_pos();
                 break;
        case  'd':delete_node();
                 break;
        case 'q':exit(0);
        
        default:printf("\ninvalid\n");
                  goto jump;
    }
    }
    
    free(head);
}
