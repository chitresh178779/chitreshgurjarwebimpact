#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello Webimpact";
    int n=s.length();
    for(int i=n;i>=0;i--){
        cout<<s[i];
    }
    return 0;
}