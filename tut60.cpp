#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // opening file using constructor and writing it 
    // string st="hii himmie";
    // ofstream out("sample.txt");
    // out<<st;

    string str2;
    ifstream in("sampleb.txt");
    in>>str2;
    cout<<str2;
    return 0;
    // cout<<str2
    // string str3;
    // ifstream inp("sampleb.txt");
    // getline(inp,str3);

    // cout<<str3;
}

