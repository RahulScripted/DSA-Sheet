// Geek is very fond of patterns. Once, his teacher gave him a square pattern to solve. He gave Geek an integer n and asked him to build a pattern. Help Geek to build a square pattern with the help of *  such that each * is space-separated in each line.

// Input: n =                        3

// Output:
//                                  * * *
//                                  * * *
//                                  * * *



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printSquare(int n) {
        for(int i = 0;i <= (n - 1); i++){
            for(int j = 0;j <= (n- 1); j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main () {
    Solution sol;
    sol.printSquare(4);
    sol.printSquare(3);
    sol.printSquare(6);
}