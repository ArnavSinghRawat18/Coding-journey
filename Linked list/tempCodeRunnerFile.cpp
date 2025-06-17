#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insert_head(int d,Node*&head){
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insert_tail(int d,Node*&tail){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
int main(){
return 0;
}