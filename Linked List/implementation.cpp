// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
public:
    int data ;
    node *next;
    
    node(int n){
        data=n;
        next=NULL;
    }
};
int lengthofll(node* head){
      node* temp =head;
      int count=0;
     while(temp!=NULL){
         
         temp=temp->next;
         count++;
         
     }
     return count;
    
}


void insert_at_front(node*&head,node*&tail,int d){
     //case1 if there is no element that means head is null
     if(head==NULL){
         node*p = new node(d);
         head=p;
         tail=p;
     }
     //case2 if there are element in linked list
     else{
         node* p = new node(d);
       
         p->next = head;
         head=p;
     }
     
 }
 void insertion_at_tail(node* &head,node* &tail,int d){
     //if ll is empty
     if(head==NULL){
         node* p=new node(d);
         head=p;
         tail=p;
     }
     //if ll is not empty
     else{
         node* p=new node(d);
         tail->next=p;
         tail=p;
         
     }
 }
 void insertion_at_position(node* &head,node* &tail,int d,int pos){
     
     if(pos==0){
        insert_at_front(head,tail,d);
     }
     else if( pos == lengthofll(head) ){
        insertion_at_tail(head,tail,d);
     }
     else{
         node*temp=head;
         for(int i=0;i<pos-1;i++){
             temp=temp->next;
         }
         node*p=new node(d);
         p->next=temp->next;
         temp->next=p;
         
         
     }
 }
 void delete_at_front(node* &head, node* &tail){
     if(head==NULL){
         delete head;
     }
     else if(head->next==NULL){
         delete head;
         head=NULL;
         tail=NULL;
     }
     else{
         node*temp=head->next;
         delete head;
         head=temp;
         
     }
     
 }
 void  delete_at_tail( node*& head, node*& tail){
     if(head==NULL){
         delete tail;
     }
     else if(head->next==NULL){
         delete head;
         head=NULL;
         tail=NULL;
     }
     else{
         node*temp=head;
         for(int i=0;i<lengthofll(head)-2;i++){
             temp=temp->next;
         }
         delete tail;
         tail=temp;
         temp->next=NULL;
         
     }
 }
 void printll(node* head){
      node* temp =head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
         
     }
     cout<<endl;
 }


int main() {
   
   node*head=NULL;
   node*tail=NULL;
   
  insert_at_front(head,tail,2);
  insertion_at_tail(head,tail,5);
  insertion_at_position(head,tail,9,1);
  printll(head);
  delete_at_front( head,  tail);
  delete_at_tail( head,  tail);
  

   printll(head);

    return 0;
}
