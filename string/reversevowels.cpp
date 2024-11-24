#include<iostream>
using namespace std;
void swap(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}
// void vowelswap(char &a,char &b){
     
int main()
{
    string s="chitresh";
    int n=s.length();
    for(int i=0;i<n/2;i++){
        for(int j=n-i-1;j>n/2;j--){
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&( s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')){
            swap(s[i],s[j]);
            break;
            }
        }
    } 
    
    cout<<s;
    return 0;
}