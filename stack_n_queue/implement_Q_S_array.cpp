#include<iostream>
using namespace std;

class queue{
    int front;
    int rear;
    int size;
    int *arr;

    public:
    queue(){
        front=0;
        rear=0;
        size=1000;
        arr= new int[size];
    }

    void push(int x){
        arr[rear]=x;
        rear++;
    }

    int pop(){
        int x= arr[front];
        front++;
        return x;
    }

    int tos(){
        int x= arr[rear-1];
        return x;
    }
};



int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.tos();
    return 0;
}