#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct node
{
  int rollno;
  int age;
  char name[20];
  
  struct node *next;
}NODE;

NODE *head=NULL;

NODE*creat_node()
{
    NODE*newnode=(NODE*)malloc(sizeof(NODE));
    //why fgets not possible to insert char str[20] and strcpy(newnode->name,str);?
    /*char str[20];
getchar(); // clear buffer
fgets(str,20,stdin);
str[strcspn(str,"\n")] = '\0'; // remove newline
strcpy(newnode->name, str);*/
    
    printf("Enter Name: ");
     scanf("%s",newnode->name);
    printf("Enter Rollno: ");
     scanf("%d",&newnode->rollno);
    printf("Enter age: ");
     scanf("%d",&newnode->age);
     
     newnode->next=NULL;
     
    return newnode;
}

void insert_sort(NODE **head)
{
    NODE *node = creat_node();

    // Case 1: empty OR insert at beginning
    if(*head == NULL || strcmp(node->name, (*head)->name) < 0)
    {
        node->next = *head;
        *head = node;
        return;
    }

    NODE *temp = *head;

    // find position
    while(temp->next && strcmp(node->name, temp->next->name) > 0)
    {
        temp = temp->next;
    }

    // insert
    node->next = temp->next;
    temp->next = node;
}

void display(NODE *ptr)
{
    if(ptr==NULL)
    {
        printf("\nThis list is empty...\n");
        return;
    }
    
    while(ptr)
    {
        printf("\n*****************\n Name: %s\n Age: %d\n rollno: %d\n",ptr->name,ptr->age,ptr->rollno);
        ptr=ptr->next;
    }
}


int main()
{
    char c;
    
    while(1)
    {
        printf("\nopt:1.insert_sort 2.display 3.quit\n");
        
        scanf(" %c",&c);
        switch(c)
        {
            case '1':
            insert_sort(&head);
            break;
            
            case '2':
            display(head);
            break;
            
            case '3':exit(0);
            
        }
    }
}




