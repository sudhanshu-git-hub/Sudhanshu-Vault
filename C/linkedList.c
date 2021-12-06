#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *change(struct node *head_ref)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("address of head %x:\n", head_ref);
    printf("temp address of before head equal %x:\n", temp);
    temp = head_ref;
    printf("temp address of after head equal %x:\n", temp);
    temp->data = 7;
    return head_ref;
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    int val;
    scanf("%d", &val);
    head->data = val;
    change(head);
    printf("%d", head->data);
}
