#include<iostream>
using namespace std;

class car{
    public:
    int a;
    int b;

  

        
car(int x, int y){
    a=x;
    b=y;
}
    //copy constructor
    car(car& obj1){
        cout<<"copy contructor called\n";
        a=obj1.a;
        b=obj1.b;
       
    }

 void display(){
        cout<<a<<" "<<b<<"\n";
    }
};
 

    

int main(){
    car obj(10,20);
    car obj1(obj);
    obj.display();
    return 0;
}