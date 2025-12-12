#include <iostream>
using namespace std;
int main()
{
    // int a=34;
    // int* p=&a;
    int *a = new int(20);
    cout << "the value at adress p is : " << *a;
    int *arr = new int[3];
    
    arr[0] = 10;
    arr[1] = 20;

    arr[2] = 430;
       delete[] arr;

    cout << "the value at adress arr[0] is : " << arr[0] << endl;
    cout << "the value at adress arr[1] is : " << arr[1] << endl;
    cout << "the value at adress arr[2] is : " << arr[2] << endl;
}