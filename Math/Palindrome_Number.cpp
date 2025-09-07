// Given an integer x, return true if x is a palindrome, and false otherwise.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int org = x, rev = 0;
        while(x != 0){
            int digit = x % 10;
            if(rev > INT_MAX / 10 && rev < INT_MIN < 10) return false;
            rev = (rev * 10) + digit;
            x /= 10;
        }
        return rev == org;
    }
};

int main () {
    Solution sol;
    cout << sol.isPalindrome(121) << endl; 
    cout << sol.isPalindrome(-121) << endl;
    cout << sol.isPalindrome(10) << endl; 
}