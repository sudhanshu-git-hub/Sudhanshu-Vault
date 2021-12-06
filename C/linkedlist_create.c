#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct node *head;
    struct node *prev;
    while (n)
    {
        int val;
        scanf("%d", &val);
        if (head == NULL)
        {
            // head=(struct node*)malloc(sizeof(struct node));
            // head->val=val;
            // head->next=NULL;
            // prev=head;
            printf("head null");
        }
        else
        {
            // struct node* temp;
            // temp=(struct node*)malloc(sizeof(struct node));
            // temp->val=val;
            //  //prev->next=temp;
            // // prev=temp;
        }
        n--;
    }
}
