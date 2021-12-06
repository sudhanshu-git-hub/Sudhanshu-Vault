#include <iostream>
using namespace std;

class node{
    public:
      int data;
      node* left;
      node* right;

      node(int d){
          data=d;
          left=NULL;
          right=NULL;
      }
};

 node* buildTree(){
  int n;
  cin>>n;

  if(n==-1){
    return NULL;
  }
  //Preorder
  //ROOT
  node* root=new node(n);
  //LEFT
  root->left = buildTree();
  //RIGHT
  root->right = buildTree();
  return root;
 }
 void traversePRE(node* root){
    if(root==NULL){
      return;
    }
    //preorder ROOT LEFT RIGHT
    cout<<root->data<<",";
    traversePRE(root->left);
    traversePRE(root->right);

 }
 void traverseIN(node* root){
    if(root==NULL){
      return;
    }
    //IN ORDER LEFT ROOT RIGHT
    traverseIN(root->left);
    cout<<root->data<<",";
    
    traverseIN(root->right);

 }
 void traversePOST(node* root){
    if(root==NULL){
      return;
    }
    //post order LEFT RIGHT ROOT
    traversePOST(root->left);
    traversePOST(root->right);
     cout<<root->data<<",";

 }
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    node* root = buildTree();
    traversePRE(root);
    cout<<endl;
    traverseIN(root);
    cout<<endl;
    traversePOST(root);
    cout<<endl;
   
}

