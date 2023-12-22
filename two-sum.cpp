class Solution {
    /*
        https://leetcode.com/problems/two-sum/
    */
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (map.find(x) != map.end() && map[x] != i) {
                return vector<int> {i, map[x]};
            }
            map[nums[i]] = i;
        }
        return vector<int> {-1, -1};
    }
};