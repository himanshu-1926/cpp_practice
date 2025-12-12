#include <iostream>
#include <list>
using namespace std;
int main(){
list<int> l;

l.push_back(10);
l.push_back(25);
l.push_front(54);
l.push_front(144);

cout<<"the elements of the list are : "<<endl;

for (int value:l)
{
    cout<<value<<endl;
}

l.pop_back();
cout<<"the new list elements after popping from last : "<<endl;
for (int value:l){
    cout<<value<<endl;
}
l.pop_front();
cout<<"the new list elements after popping from first : "<<endl;
for (int value:l){
    cout<<value<<endl;

}
cout<<"the size of the list is : "<<l.size();
return 0;
}