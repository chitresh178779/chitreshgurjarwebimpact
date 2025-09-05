#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    //done using gpt : understood the concept
     vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> st;

        for(int i = 0; i < 2 * n; i++) { 
            int num = nums[i % n];
            while(!st.empty() && nums[st.top()] < num) {
                result[st.top()] = num;
                st.pop();
            }
            if(i < n) st.push(i); 
        }
        return result;
    }
};

int main(){
    return 0;
}