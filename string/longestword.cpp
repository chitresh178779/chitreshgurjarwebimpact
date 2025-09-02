#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s1="my name is Chitresh";
    string longest="my";
    int count=2;
    int n=s1.size();
    for(int i=0;i<n;i++){
        int count1=0;
        if(s1[i]==' '){
            count=max(count,count1);
            
        }
    }
    return 0;
}