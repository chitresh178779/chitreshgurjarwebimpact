#include<iostream>
#include<string>
using namespace std;

void swap(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}
int main()
{
    string s="CHINTU";
    int n=s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    cout<<s;
    return 0;
}