#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a>>b;
    int isit=1;
    if(a.length()==b.length()){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                continue;
            }
            else{
                 isit=0;
                 break;

            }
        }
    }
    if(isit==1){
        cout<<"yes they are anagram";
    }
    else{
        cout<<"not anagram";
    }
    
    return 0;
}