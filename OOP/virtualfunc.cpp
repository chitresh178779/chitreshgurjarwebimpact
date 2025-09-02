#include<iostream>
using namespace std;

class car{
    public:
    virtual void start(){
        cout<<"car started\n";
    }
};
class engine:public car{
    public:
    void start(){
        cout<<"engine info\n";
    }
};

int main(){
    engine e;
    e.start();

    car c=engine();
    c.start();

    car *d;
    d=&e;
    d->start();
    
    return 0;
}