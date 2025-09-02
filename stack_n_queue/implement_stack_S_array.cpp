#include<iostream>
using namespace std;

class stack{
    int top;
    int size;
    int *arr;
    
    public:
    stack(){
        top=-1;
        size=1000;
        arr= new int[size];
    }

    void push(int x){
        if(top>=1000){
            cout<<"overflow"<<endl;
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    int pop(){
        int x;
        if(top==-1){
            cout<<"underflow"<<endl;
            return -1;
        }
        else{
            x=arr[top];
            top--;
        }
        return x;
    }

    bool isempty(){
        if (top==-1){
            return 1;
        }
        return 0;
    }

    int tos(){
        int x;
        if(isempty())
            return -1;
        x=arr[top];
        return x;    
    }

    bool isfull(){
        if (top>=1000){
            return 1;
        }
        return 0;
    }

};





int main(){

    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.tos();

    return 0;
}