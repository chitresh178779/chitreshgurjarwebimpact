#include<iostream>
#include<string>
using namespace std;
void addstring(string a,string b){
    string c=a+b;
    cout<<c;

}
int main()
{
    string a="hello";
    string b=" world";
    addstring(a,b);
    return 0;
}