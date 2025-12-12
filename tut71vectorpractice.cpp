#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v;

v.push_back(10);
v.push_back(25);
v.push_back(54);
v.push_back(144);

cout<<"the elements of the vector are : "<<endl;
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}
v.pop_back();
cout<<"the new vector elements after popping from last : "<<endl;
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}
v.insert(v.begin()+1,15);

cout<<"the new vector elements at index 1 inserted : "<<endl;
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}
v.erase(v.end()-1);
cout<<"the new vector elements after erasing last element: "<<endl;
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}
cout<<"the first and last element is : "<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;

return 0;
}