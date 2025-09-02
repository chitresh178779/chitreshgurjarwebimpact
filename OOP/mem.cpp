#include<iostream>
using namespace std;
class hello{
    public:
    int a;
    int b;
    int res;

    // void val(int i,int j){
    //     a=i;
    //     b=j;
    // }

    void operator+(){
        res=a*b;

    }
    void print(){
        cout<<res;
    }
};
int main(){
    // hello obj(2,3);
    hello obj1;
    obj1.a=2;
    obj1.b=3;
    +obj1;
    obj1.print();
    return 0;
}