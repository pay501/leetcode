#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> duplicate = {};
        for( int i = 0; i < nums.size(); i++ ){
            bool isUnique = true;
            for( int j = 0; j < nums.size(); j++){
                if(i != j && nums[i] == nums[j]){
                    isUnique = false;
                }
            }
            if(isUnique){
                duplicate.push_back(nums[i]);
            }
        }
        return duplicate;
    }
};

int main(){
    vector<int> testCase1 = {1,2,1,3,2,5};
    
    Solution s;
    s.singleNumber(testCase1)
    
    return 0;
}