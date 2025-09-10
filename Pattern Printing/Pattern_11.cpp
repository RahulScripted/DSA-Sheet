// Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern. Help Geek to build a star pattern.


// Input:                       5

// Output:
//                              1 
//                              0 1 
//                              1 0 1
//                              0 1 0 1 
//                              1 0 1 0 1


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 0;i < n;i++){
            for(int j = 0;j <= i;j++){
                if((i + j) % 2 == 0) cout<<"1 ";
                else cout<<"0 ";
            }
            cout<<endl;
        }
    }
};

int main () {
    Solution sol;
    sol.printTriangle(4);
    sol.printTriangle(5);
    sol.printTriangle(7);
}