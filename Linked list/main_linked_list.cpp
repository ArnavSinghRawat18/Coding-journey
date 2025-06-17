#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next; 
    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
    
};
void insert(int d,Node*&head){
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
void inserttail(Node* &tail, int d){
Node*temp=new Node(d);
tail->next=temp;
tail=tail->next;
}
void print(Node*&head){
    Node*temp=head;// ye ek temp bana rha h jo head ko point karega
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void insert_at_pos(int d,int pos,Node*head){
    if(pos==1){
        insert(d,head);
        return;
    }
    Node*temp=head;
    
int counter=1;
while(counter<pos-1){
    temp=temp->next;
    counter++;
}
Node*insert_at_pos=new Node(d);
insert_at_pos->next=temp->next;
temp->next=insert_at_pos;

}


int main(){

Node*node1=new Node(4);
cout<<node1->data<<endl;
Node*head=node1;
Node*tail=node1;
inserttail (tail,52);
insert_at_pos(44,1,head);
print(head);



    
    return 0;
}