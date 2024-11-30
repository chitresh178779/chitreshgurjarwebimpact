#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int i=n-1;

    while(i>=0){
        if(s[i]=='0'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'){
            continue;
        }
        else{
            n=i;
            break;
        }
        i--;
    }
    for(int j=0;j<=n;j++){
        cout<<s[j];
    }
    return 0;
}