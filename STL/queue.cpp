#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> arnav;
    arnav.push("Arnav");
    arnav.push("Singh");
    arnav.push("Rawat");
   cout<<"first element--> "<<arnav.front()<<endl;
   cout<<"Size--> "<<arnav.size()<<endl;
   arnav.pop();
   cout<<"first element after pop--> "<<arnav.front()<<endl;
   cout<<"Size after pop--> "<<arnav.size()<<endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}