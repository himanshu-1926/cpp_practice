#include <iostream>
using namespace std;
class Point {

int x, y;
public:
Point(int a, int b){
    x=a;
    y=b;
}
void display(){
    cout<<"the point is : ( "<<x<<" , "<<y<<" )"<<endl;
}
};
int main(){
    Point p (7,8);
    p.display();

    Point q(65,7);
    q.display();

    return 0;


}