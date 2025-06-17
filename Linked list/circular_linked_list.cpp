#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free "<<value<<endl;

    }
};
void insertNode(Node*&tail, int element,int d){
    //assuming that the element is present in the list
      //Case-1, empty list 
      if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        temp->next=temp;
      }
      else{
        //non empty list
        //assuming that the element is present int he list 
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
      }
}

void print(Node*&tail){
Node*curr=tail;
do{
    cout<<tail->data<<" ";
    tail=tail->next;
}
while(tail!=curr);
}
void deleteNode(Node*&temp,int value){
    Node*prev= tail ;
    Node*curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}




int main(){
Node*tail=NULL;
insertNode(tail,5,3);
print(tail);cout<<endl;
insertNode(tail,3,5);
print(tail);cout<<endl;




    return 0;
}