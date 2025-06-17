#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
        
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        
    }
    
};
Node*convertArr2LL(vector<int> &arr){
    Node*head=new Node*(arr[0]);
    Node*mover=head;
    for(int i=0;i<arr.size;i++){
        Node*temp=new Node*(arr[i]);
        mover->next=temp;
        mover=temp;
    }
}
int main(){
    vector<int>arr{5,6,7,2,1};
    Node*head=convertArr2LL(arr);
    cout<<head->data;
    while(temp!=null){
        cout<<temp->data<<" ";
       temp= temp->next;
    }
    return 0;
}