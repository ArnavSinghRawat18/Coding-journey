#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int> arnav;
  arnav.insert(1);
  arnav.insert(2);
  arnav.insert(3);
  arnav.insert(4);
  arnav.insert(5);
  arnav.insert(5);
  arnav.insert(5);
  arnav.insert(5);
  arnav.insert(6);
  arnav.insert(7);
  for(int i:arnav){
    cout<<i<<endl;
  }
  set<int>::iterator it=arnav.begin();
  it++;
  arnav.erase(it);
  for (auto i:arnav){
    cout<<i<<endl;
  }
  cout<<endl;
  cout<<"5 is present or not: "<<arnav.count(5)<<endl;
  
  
  
  
  
  
  
  
  
    return 0;  
}