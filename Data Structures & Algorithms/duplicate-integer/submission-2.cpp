class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> appearance;

        for (int n : nums){
            if (appearance.count(n)){
                return true;
            }

            appearance[n] = 1;
        }

        return false;
    }
};