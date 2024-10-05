#include <iostream>
#include <string>
using namespace std;
#include <vector>

class Solution{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
        if (nums1.size() > nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high){
            int partitionX = (low + high) / 2;
            int partitionY = (m + n + 1) / 2 - partitionX;

            int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minX = (partitionX == m) ? INT_MAX : nums1[partitionX];

            int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minY = (partitionY == n) ? INT_MAX : nums2[partitionY];

            if (maxX <= minY && maxY <= minX){
                if ((m + n) % 2 == 1){
                    return max(maxX, maxY);
                }
                else{
                    return (max(maxX, maxY) + min(minX, minY)) / 2.0;
                }
            }
            else if (maxX > minY){
                high = partitionX - 1;
            }
            else{
                low = partitionX + 1;
            }
        }
        return 0;
    }
};

int main(){

    Solution s;
    vector<int> num1 = {1, 3};
    vector<int> num2 = {2};
    vector<int> num3 = {1, 2};
    vector<int> num4 = {3, 4};
    int result1 = s.findMedianSortedArrays(num1, num2);
    int result2 = s.findMedianSortedArrays(num3, num4);

    printf("Test case 1 the result is %d, the result should be %d .\n", 2.000, result1);
    printf("Test case 2 the result is %d, the result should be %d .\n", 2.5000, result2);

    return 0;
}