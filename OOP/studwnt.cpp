#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    string surname;
    string dept;
    string scholarno;
    string age;
    string gender;

    void setvalue(){
        cin>>name;
        cin>>surname;
        cin>>dept;
        cin>>scholarno;
        cin>>age;
        cin>>gender;
    }

    void getvalue(){
        cout<<name<<" ";
        cout<<surname<<" ";
        cout<<dept<<" ";
        cout<<scholarno<<" ";
        cout<<age<<" ";
        cout<<gender<<" ";
    }

};
int main(){
    student st;
    vector<vector<string>> stdb;
    int n;
    cout<<"enter no. of records: ";
    cin>>n;
    int i=1;
    while(i<=n){
        st.setvalue();
        st.getvalue();
        i++;
    }
    
    return 0;
}