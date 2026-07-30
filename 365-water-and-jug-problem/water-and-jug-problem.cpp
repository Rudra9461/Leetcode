#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMeasureWater(int x, int y, int target) { 
        if(x + y < target) return 0;

        if(x == 0) return (target == y) ? 1 : 0; 
        if(y == 0) return (target == x) ? 1 : 0; 

        return (target % __gcd(x, y) == 0) ? 1 : 0; 
    }
};