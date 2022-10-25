#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node* newNode(){
    struct node* cur;
    cur=(struct node*)malloc(sizeof(struct node*));
    return cur;
}
struct node* createLinkList(int n){
    if(n<1)
    return NULL;
    struct node* head;
    head = newNode();
    if(head==NULL)
    return NULL;
    int tempData;
    cin>>tempData;
   head->data=tempData;
   head->next=NULL;
   n--;
   struct node* cur = head;
   while(n){
       struct node* temp = newNode();
       cin>>tempData;
       temp->data=tempData;
       cur->next=temp;
       cur=cur->next;
       n--;
   }
   return head;
}
void printLinkList(struct node* head){
        struct node* cur=head;
        while(cur->next!=NULL){
            cout<<cur->data<<"->";
            cur=cur->next;
        }
}
int main() {
   int n;
   cin>>n;
   struct node* head= createLinkList(n);
    printLinkList(head);
}
