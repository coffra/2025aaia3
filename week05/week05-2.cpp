//week05-2.cpp
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    cout<<"�п�J�@�q�^��A�̭��i���Ů�:";
    string s;
    getline(cin,s);
    cout<<"Ū�i�Fs�r��"<<s<<endl;
    stringstream ss(s);
    string word;
    while( ss>>word ){
        cout<<"��1�Ӧr:"<<word<<endl;
    }
}
