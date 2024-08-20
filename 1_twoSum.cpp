#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            int x = nums[i];
            for(int j = 0; j < nums.size(); j++){
                int y = nums[j];

                if( i != j && x + y == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution s;
    nums = s.twoSum(nums, target); //If target is 9 the answer should be {0, 1}
    
    for( int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}