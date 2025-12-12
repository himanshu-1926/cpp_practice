// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     int fact;
//     fact=n*factorial(n-1);
//     return fact;
// }
// int main(){
// int num;
// cout<<"enter the no. : "<<endl;
// cin>>num;
// cout<<"the factoraial is : "<<factorial(num)<<endl;

//     return 0;
// }
#include <iostream>
using namespace std;
int factorial(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)

        fact = fact * i;
    return fact;
}

int main()
{
    int num;
    cout << "enter the number : " << endl;
    cin >> num;
    cout << "the factorial is : " << factorial(num);
    return 0;
}