#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(Node*head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int GetLength(Node*head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node*&head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node*&tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    temp->next=NULL;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node*&head,Node*&tail,int position,int d){
    //insert at start
    if(position==1){
        insertAtHead(head,d);
        return ;
    }
    int counter=1;
    Node*num=new Node(d);
    Node*temp=head;
    while(counter<position-1){
        temp=temp->next;
        counter++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    num->next=temp->next;
    temp->next=num;
    num->prev=temp;
    temp->next->prev=num;
    
}


int main(){
    
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    print(head);
    cout<<GetLength(head)<<endl;
    insertAtHead(head,15);
    print(head);
    cout<<GetLength(head)<<endl;
    insertAtHead(head,25);
    print(head);
    cout<<GetLength(head)<<endl;
    insertAtHead(head,65);
    print(head);
    cout<<GetLength(head)<<endl;
    insertAtHead(head,95);
    print(head);
    cout<<GetLength(head)<<endl;
    insertAtHead(head,195);
    print(head);
    cout<<GetLength(head)<<endl;
    insertAtTail(tail,66);
print(head);

insertAtPosition(head,tail,1,55);
print(head);






    return 0;
}