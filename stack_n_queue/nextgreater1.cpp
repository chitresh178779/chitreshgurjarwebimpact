#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i=0;i<nums1.size();i++){
            int num= nums1[i];
            int j=0;

            while(j<nums2.size() && nums2[j]!=num){
                j++;
            }

            int greater=-1;
            for(int k=j+1;k<nums2.size();k++){
                if(nums2[j]<nums2[k]){
                    greater=nums2[k];
                    break;
                }
            }
            arr.push_back(greater);
        }
        return arr;
    }
};

int main(){
    return 0;
}

