#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string> arnav;
arnav.push("1");
arnav.push("2");
arnav.push("3");
arnav.push("4");
arnav.push("5");

cout<<"Top element--> "<<arnav.top()<<endl;
arnav.pop();
cout<<"Top element after poping--> "<<arnav.top()<<endl;
cout<<"Size of stack --> "<<arnav.size()<<endl;
cout<<arnav.empty()<<endl;















return 0;
}