#include<iostream>
using namespace std;
void swap(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}
void vowelswap(char &a,char &b){
     if((a=='a'||a=='e'||a=='i'||a=='o'||a=='u')&&( b=='a'||b=='e'||b=='i'||b=='o'||b=='u')){
        swap(a,b);}
}
int main()
{
    string s="chintu";
    int n=s.length();
    for(int i=0;i<n/2;i++){
        for(int j=n-1;j<n/2;j--){
            vowelswap(s[i],s[j]);
        }
    }
    cout<<s;
    return 0;
}