#include<iostream>
using namespace std;

class car{
    public:
    string model_no;
    string type;
    void display(){
        cout<<model_no<<"\n"<<type;
    }
};

int main(){
    car vroom;
    vroom.model_no="XR2233";
    vroom.type="diesel";
    vroom.display();
    return 0;
}