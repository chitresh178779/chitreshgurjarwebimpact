#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n= str.length();
    if(str[n-1]=='1'||str[n-1]=='3'||str[n-1]=='5'||str[n-1]=='7'||str[n-1]=='9'){
        cout<<"it is odd";
    }
    else{
        cout<<"it is even";
    }
    return 0;

}