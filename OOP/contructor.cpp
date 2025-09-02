#include<iostream>
using namespace std;

class car{
    public:
    int a;
    int b;

    //member function
    void value(){
        a=20;
        b=30;
        cout<<a<<" "<<b<<"\n";
    }
    //default 2 it will give error as constructor cannote be overloaded:
    // car(){
    //     cout<<"second constructor"<<"\n";
    // }
    //default constructor
    car(){
        cout<<"constructor created\n";
    }

    
};
int main(){
    car obj;
    obj.value();
    return 0;
}