// Geek is very fond of patterns. Once, his teacher gave him a pattern of triangle to solve. He gave Geek an integer n and asked him to build a pattern. Help Geek to build a triangle pattern using stars(*).

 

// Input: n =                       5
// Output:
//                                  * 
//                                  * * 
//                                  * * * 
//                                  * * * * 
//                                  * * * * *



#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 0;i <= (n - 1); i++){
            for(int j = 0;j <= i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main () {
    Solution sol;
    sol.printTriangle(4);
    sol.printTriangle(3);
    sol.printTriangle(7);
}