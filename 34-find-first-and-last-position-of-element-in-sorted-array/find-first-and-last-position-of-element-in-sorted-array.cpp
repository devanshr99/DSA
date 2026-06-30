class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        unordered_map<int, pair<int, int>> mp;

        for (int i = 0; i < nums.size(); i++) {

            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = {i, i};      // first occurrence
            }
            else {
                mp[nums[i]].second = i;    // update last occurrence
            }
        }

        if (mp.find(target) != mp.end()) {
            return {mp[target].first, mp[target].second};
        }

        return {-1, -1};
    }
};