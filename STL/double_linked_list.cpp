#include <iostream>
#include<list>
using namespace std;
int main(  ){
list<int> list;
list.push_back(1);
list.push_front(2);
for(int i:list){
    cout<<i<<" ";
} 
cout<<endl;   
cout<<"after erase"<<endl;
list.erase(list.begin());

    for(int i:list){
    cout<<i<<" ";}
    
    
    
    
    return 0;

}