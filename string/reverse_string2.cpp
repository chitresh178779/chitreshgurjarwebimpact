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
    int d;
    cin>>d;
    for(int i=0;i<d/2;i++){
        swap(s[i],s[d-i-1]);
    }
    cout<<s;
    return 0;
}