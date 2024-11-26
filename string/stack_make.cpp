#include<iostream>
#define maxsize 10
using namespace std;
int stack[maxsize];
int tos = -1;
int isFull()
{
	if(tos==maxsize-1)
		return 1;
	else
		return 0;
}
int isEmpty()
{
	if(tos==-1)
		return 1;
	else
		return 0;
}
void push(int x){
	if (isFull()){
		cout<< "overflow";
	}
	else
	{
		stack[++tos] = x;
	}
}
int pop()
{
	int i;
	if(isEmpty()){
		cout << "underflow";
		return 0;
	}
	else
	{
		i = stack[tos--];
		return i;
	}

}
int peek()
{
	if(isEmpty())
	{
		cout<<"Stack empty";
		return -1;
	}
	else
		return stack[tos];
}
int main()
{
	push(10);
	push(20);
	push(10);
	push(20);
	push(10);
	push(20);
	push(10);
	push(20);
	push(10);
	push(20);
	push(300);
	cout <<"\n" << pop();
	cout <<"\n" << peek();
	return 0;

}