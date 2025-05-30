#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int windowSum = 0;

        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            windowSum += nums[r];

            while (windowSum >= target) {
                ans = min(ans, r - l + 1);
                windowSum -= nums[l];
                l++;
            }
        }

        return ans != INT_MAX ? ans : 0;
    }
};
