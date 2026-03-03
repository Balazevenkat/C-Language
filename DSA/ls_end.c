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
        case 'q':exit(0);
        
        default:printf("\ninvalid\n");
                  goto jump;
    }
    }
    
    free(head);
}
