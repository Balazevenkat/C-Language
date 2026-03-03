#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_begin(int val)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = val;
    new->next = head;
    head = new;
}


void display()
{
    struct node *temp = head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    insert_begin(10);
    insert_begin(20);
    insert_begin(30);
    insert_begin(40);

    printf("Before Reverse:\n");
    display();

    return 0;
}
