// 0 ms | 20.7 MB
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int x : nums) {
            ans = ans ^ x;
        }

        return ans;
    }
};