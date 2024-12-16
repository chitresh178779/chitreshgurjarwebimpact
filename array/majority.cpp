#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,1,2,2,1,1,1};
    int ele=0,count=0,count1=0;
    for(int i=0;i<nums.size();i++){
        if(count==0){
            ele=nums[i];
        }
        if(nums[i]==ele){
            count++;
        }
        if(nums[i]!=ele){
            count--;
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]==ele){
            count1++;
        }
    }
    if(count1>nums.size()/2){
        cout<<ele;
    }
    return 0;
}