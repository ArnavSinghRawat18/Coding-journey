#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;
d.push_back(1);
d.push_back(2);
d.push_back(3);
d.push_front(4);
cout<<d.back()<<endl;
cout<<d.front()<<endl;
for(int i:d){
    cout<<i<<" ";
}






    return 0;
}