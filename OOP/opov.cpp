#include<iostream>
using namespace std;
class op{
    public:
    int sum;
    float fsum;

    int add(int a,int b){
        sum=a+b;
        return sum;
    }
    float add(float a,float b,float c){
        fsum=a+b+c;
        return fsum;
    }
};
int main(){
    op obj;
    cout<<obj.add(2,3)<<endl;
    cout<<obj.add(2.7,3.1,0.01);
    return 0;
}