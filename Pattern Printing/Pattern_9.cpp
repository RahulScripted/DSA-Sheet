// Geek is very fond of patterns. Once, his teacher gave him a star pattern to solve. He gave Geek an integer n and asked him to build a pattern. Help Geek to build a star pattern.

// Input:                        2

// Output:

//                                *
//                               * *
//                               * *
//                                *


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printDiamond(int n) {
        
        // Upper Part
        for(int i = 0;i < n;i++){
            for(int j = 0;j < (n - i - 1); j++) cout<<" ";
            for(int j = 0;j <= i;j++){
                if(j < i) cout<<"* ";
                else cout<<"*";
            }
            cout<<endl;
        }
        
        // Lower Part
        for(int i = n;i > 0;i--){
            for(int j = 0;j < (n - i); j++) cout<<" ";
            for(int j = 0;j < i;j++){
                if(j < i) cout<<"* ";
                else cout<<" *";
            }
            cout<<endl;
        }
    }
};

int main () {
    Solution sol;
    sol.printDiamond(4);
    sol.printDiamond(5);
    sol.printDiamond(7);
}