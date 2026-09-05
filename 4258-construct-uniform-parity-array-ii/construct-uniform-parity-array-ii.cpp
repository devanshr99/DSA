class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (even == n || odd == n) {
            return true;
        }
        int minOdd = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 != 0) {
                if (nums1[i] < minOdd) {
                    minOdd = nums1[i];
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0) {
                if (nums1[i] < minOdd) {
                    return false;
                }
            }
        }

        return true;
    }
};