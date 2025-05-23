#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(log(x))
// Space Complexity: O(1)

class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;

        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (mid * mid < x) {
                l = mid + 1;
            }
            else if (mid * mid > x) {
                r = mid - 1;
            }
            else {
                return mid;
            }
        }

        return r;
    }
};
