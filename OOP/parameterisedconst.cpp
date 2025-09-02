#include<iostream>
using namespace std;

class car{
    public:
    int a;
    int b;

    void display(){
        cout<<a<<" "<<b<<"\n";
    }

    //parameterized constructor
    car(int x,int y){
        a=x;
        b=y;
    }

    
};
int main(){
    car obj(10,20);
    obj.display();
    return 0;
}