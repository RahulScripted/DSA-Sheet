// Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern. Help Geek to build a star pattern.


// Input:                       5
// Output:
//                              * 
//                              * * 
//                              * * * 
//                              * * * * 
//                              * * * * *
//                              * * * *
//                              * * *
//                              * *
//                              *



#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        
        // Upper Part
        for(int i = 0;i < n;i++){
            for(int j = 0;j <= i;j++) cout<<"* ";
            cout<<endl;
        }
        
        // Lower Part
        for(int i = (n - 1);i > 0;i--){
            for(int j = 0;j < i;j++) cout<<"* ";
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