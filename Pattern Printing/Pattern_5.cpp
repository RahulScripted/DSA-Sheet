// Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Ram an integer n and asked him to build a pattern. Help Ram build a pattern.


// Input:                               5
// Output:
//                                      *
//                                     ***  
//                                    *****
//                                   *******
//                                  *********


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < (n - i - 1); j++){
                cout<<" ";
            }
            for(int j = 0; j < (2 * i) + 1; j++){
                cout<<"*";
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