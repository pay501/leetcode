#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int romanValue (char c) {
            switch (c){
                case 'I':
                    return 1;
                case 'V':
                    return 5;
                case 'X':
                    return 10;
                case 'L':
                    return 50;
                case 'C':
                    return 100;
                case 'D':
                    return 500;
                case 'M':
                    return 1000;
            }
            return -1;
        }
    int romanToInt(string s) {
        int sumVal = 0;
        for( int i = 0; i < s.length(); i++){
            int currentVal = romanValue(s[i]);
            int nextVal = 0;
            if( i+1 < s.length()){
                nextVal = romanValue(s[i+1]);
            }
            if(currentVal < nextVal){
                sumVal -= currentVal;
            } else {
                sumVal += currentVal;
            }
        }
        return sumVal;;
    }
};

int main(){

    Solution s;
    string testCase1 = "MCMXCIV";
    string testCase2 = "III";
    
    int result1 = s.romanToInt(testCase1);
    int result2 = s.romanToInt(testCase2);

    printf("Test case 1 the result is %d, the result should be %d .\n", 1994, result1);
    printf("Test case 2 the result is %d, the result should be %d .\n", 3, result2);

    return 0;
}