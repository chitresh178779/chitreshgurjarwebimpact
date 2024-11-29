#include<iostream>
using namespace std;
void firstuniqueletter(string s){
    int n=s.length();
    char uqe;
    int i=0;
    while(i<n){
        int j=0,d=0;
        while(j<n){
            if(s[i]==s[j]){
                d=d+1;
            }
            
            j++;
        }
        if(d==1){
                uqe=s[i];
                break;
        }
        i++;
    }
    cout<<uqe;
}
int main(){
    string s;
    cin>>s;
    firstuniqueletter(s);
    return 0;
}