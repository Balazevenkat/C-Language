#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
typedef struct node
{
    int data;
    struct node*next;
}NODE;
NODE *head=NULL;
NODE *create_nodes(int n)
{
    NODE*newnode=(NODE*)malloc(sizeof(NODE));
    
    newnode->data=n;
    newnode->next=NULL;
    
    return newnode;
}
void insert_at_beg(int val)
{
    NODE *node=create_nodes(val);
    if(head==NULL)
    {
       printf("This is first node:%d\n",node->data);
       node->next=NULL;
         head=node;
       
       return;
    }
    
    node->next=head;
    head=node;
}
void revers_nodes()
{
    //cur shift backward one time cur moves forwar along next extra 
    NODE *prev=NULL;
    NODE*cur=head;
    NODE*next=NULL;
    
    while(cur!=NULL)
    {
        next=cur->next;//first hold next nodes location
        cur->next=prev;//mkae current location prev(intinally NULL)
        prev=cur;//know point the prev and cur at same
        
        cur=next;//first holded next give to cur 
    }
    head=prev;
}

void sorted_order()
{
    int swap,tem;                         //tem to hold nodes data
    NODE*ptr1=head;
    NODE*lptr=NULL;
    do{
        swap=0;
        ptr1=head;                                 //every time to check
        while(ptr1->next!=lptr)
        {
            if(ptr1->data > ptr1->next->data)      
            {
                tem=ptr1->data;
                ptr1->data=ptr1->next->data;
                ptr1->next->data=tem;
                swap=1;
            }
            ptr1=ptr1->next;
        }
         lptr=ptr1;                             //lptr (pointer last)  updates 
    }while(swap);
    
    
}

void display_nodes()
{
    NODE *tem=NULL;
    
    tem=head;
    
    while(tem!=NULL)
    {
        printf("%d -> ",tem->data);
        tem=tem->next;
    }
    printf("Null\n");
}
int main()
{
    int arr[5];
    
    srand(time(NULL));
    
    for(int i=0;i<5;i++)
    {
        arr[i]=rand()%(10-2+1)+2;
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
    printf("%d ",arr[i]);
    
    printf("\n");
    
    for(int i=0;i<5;i++)
    insert_at_beg(arr[i]);
    display_nodes();
    
   revers_nodes();
    
    display_nodes();
    
    sorted_order();
     display_nodes();
    
    free(head);
    return 0;
}
