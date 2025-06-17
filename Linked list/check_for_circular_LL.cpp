#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// ___________________________________________________________first approach__________________________
// bool detectLoop(Node *head){

//     if (head==NULL) return false;
//     map<Node*,bool> visited;
//     Node*temp=head;
//     while(temp!=NULL){
//         //if we are starting at cycle point 
//     if(visited[temp]==true){
//         return true;
//     }
//     visited[temp]=true;
//     temp=temp->next;
//     }
//     return false;

// }
//___________________________________________________________second approach_______________________________________
