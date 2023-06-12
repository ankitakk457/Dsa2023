#include <iostream>
#include <queue>
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

void preorder(node* root){
    
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    
    if(root==NULL){
        return;
    }
  
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int countnode(node *root){
    if(root==NULL){
        return 0;
    }
    return countnode(root->left)+countnode(root->right)+1;
}

int sumofnode(node* root){
     if(root==NULL){
        return 0;
    }
    return sumofnode(root->left)+sumofnode(root->right)+root->data;
}

bool searchinabinarytree(node* root, int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data || searchinabinarytree(root->left,data) || searchinabinarytree(root->right,data)){
        return true;
    }
    return false;
}
int heightoftree(node*root){
    if(root==NULL){
        return 0;
    }
    return max(heightoftree(root->left),heightoftree(root->right))+1;
}

void mirror(node*root){
    if(root==NULL){
        return;
    }
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}
class f{
    public:
     int hei;
     int dia;
     
     f(){
         hei=0;
         dia=0;
     }
};

f fastdiameter(node *root){
    
    f n;
    
    if(root==NULL){
        return n;
    }
    
    f x= fastdiameter (root->left);
    f y= fastdiameter (root->right);
    
    n.hei=max(x.hei,y.hei)+1;
    
    int op1= x.dia;
    int  op2= y.dia;
    int op3= x.hei + y.hei;
    
    n.dia=max(op1,max(op2,op3));
    
    return n;
    
}
void levelwise(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        
      node* cur= q.front();
      q.pop();
       
     if(cur==NULL)
     {
          cout<<endl;
          if(!q.empty()){
              q.push(NULL);
          }
      }
      
      else
      {
        cout<<cur->data<<" ";
        if(cur->left!=NULL){
            q.push(cur->left);
        }
        if(cur->right!=NULL){
          q.push(cur->right);
        }
      }
    }
}
node* buildtree(){
    int d;
    cin>>d;
    
    if(d==-1){
        return NULL ;
    }
    else{
        node* root=new node(d);
        root->left=buildtree();
        root->right=buildtree();
        return root;
    }
}
node* buildtreelevelwise(){
    node*root=NULL;
    int d;
    cin>>d;
    
    root=new node(d);
    queue<node*>q;
    q.push(root);
    
    while(!q.empty()){
        node*cur=q.front();
        q.pop();
        cout<<"Enter left and right data of "<<cur->data<<endl;
        int left;
        int right;
        cin>>left>>right;
        
        if(left!=-1){
            cur->left=new node(left);
            q.push(cur->left);
        }
         if(right!=-1){
            cur->right=new node(right);
            q.push(cur->right);
        }
        
      }
      return root;
    
}
int main() {
 
    node*root=buildtree();
    int n= countnode(root);
    cout<<"Count nodes : "<<n<<endl;
    
    int sum= sumofnode(root);
     cout<<"Sum of nodes : "<<sum<<endl;
    
    cout<<"Preorder is: "<<endl;
    preorder(root);
    cout<<endl;
    
    cout<<"Inorder is: "<<endl;
    inorder(root);
    cout<<endl;
    
    cout<<"Postorder is: "<<endl;
    postorder(root);
    cout<<endl;
    
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
   if(searchinabinarytree(root, data)==true){
    cout<<"true";
   }
   else{
    cout<<"false"<<endl;
   }
   cout<<endl;
   
   
   int a= heightoftree(root);
   cout<<"Height of a tree "<<a<<endl;
   
   f b=fastdiameter(root);
   cout<<"Height of tree is "<<b.hei<<endl;
   cout<<"Diameter of tree is "<<b.dia<<endl;
   cout<<"Levelwise : "<<endl;
   
   
   levelwise(root);
   
   
   buildtreelevelwise();
   levelwise(root);
   
   
   cout<<"Before Mirror image is ";
   inorder(root);
   cout<<endl;
   mirror(root);
   cout<<"After Mirror image is ";
   inorder(root);
   cout<<endl;
 
 
   
   return 0;
}
