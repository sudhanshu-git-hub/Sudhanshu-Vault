#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};

void traverse(struct node *head)
{
    struct node *temp;
    //temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while (temp->next != NULL)
    {
        printf("%d, ", temp->val);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    //struct node *temp;
    int n;
    scanf("%d", &n);
    while (n)
    {
        int val;
        scanf("%d", &val);
        struct node *current;
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            head->val = val;
            head->next = NULL;
            current = head;
        }
        else
        {
            struct node *temp;
            temp = (struct node *)malloc(sizeof(struct node));
            temp->val = val;
            current->next = temp;
            current = temp;
        }
        n--;
    }
    //head =deleteNode(head,242);
    traverse(head);
}
