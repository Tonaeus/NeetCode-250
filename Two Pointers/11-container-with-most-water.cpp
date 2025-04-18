#include <bits/stdc++.h>
using namespace std;

// Time Complexity: 
// Space Complexity: 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0;
        int r = height.size() - 1;

        while (l < r) {
            ans = max(ans, (r - l) * min(height[l], height[r]));

            if (height[l] < height[r]) {
                l++;
            }
            else {
                r--;
            }
        }

        return ans;
    }
};
