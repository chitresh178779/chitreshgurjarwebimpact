#include<bits/stdc++.h>
#include<stack>
#include<algorithm>
#define INT_MAX 2147483647
using namespace std;
class MinStack {
public:
    stack<int> s1,s2;
    int minval=INT_MAX;
    int count=0;
    MinStack() {
    }
    
    void push(int val) {
        s1.push(val);
        minval=min(minval,val);
    }
    
    void pop() {
        s1.pop();
        if(s1.size()==1){
            minval=s1.top();
            count=0;
        }
    }
    
    int top() {
        int v=s1.top();
        return v;
    }
    
    int getMin() {
        if(count==0){
            count++;
            return minval;
        }
        else if(count>0){
            minval=s1.top();
            while(!s1.empty()){
                s2.push(s1.top());
                minval=min(minval,s1.top());
                s1.pop();
            }
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main(){
    return 0;
}