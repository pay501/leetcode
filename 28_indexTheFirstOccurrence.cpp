#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < needle.size(); i++){
            for ( int j = 0; j < haystack.size(); j++){
                if (needle[i] == haystack[j]){
                    int constNum = needle.size();
                    char arr[constNum];
                    for ( int k = 0; k < constNum; k++){
                        if(needle[k] == haystack[j + k ]){
                            arr[k] = needle[k];
                        } else {
                            for ( int x = 0; x < (sizeof(arr)/sizeof(arr[0])); x++){
                                arr[x] = '\0';
                            }
                            break;
                        }
                    }
                    string needleWord;
                    int length = sizeof(arr) / sizeof(arr[0]);
                    if ((sizeof(arr)/sizeof(arr[0])) > 0){
                        for( int l = 0; l < length; l++ ){
                        needleWord = needleWord + arr[l];
                        }
                        if( (needleWord == needle) == 1){
                            return j;
                        }
                    }
                }
            }
            return -1;
        }
        return -1;
    }
};

int main(){

    Solution s;
    int result1 = s.strStr("sadbutsad","sad"); //The result should be 0;
    int result2 = s.strStr("leetcode", "leeto"); //The result should be -1;
    

    printf("Test case 1 the output should be %d, the result is %d.\n", 0, result1);
    printf("Test case 2 the output should be %d, the result is %d.\n", -1, result2);
    
    return 0;
}