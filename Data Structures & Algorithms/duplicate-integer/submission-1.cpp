class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> value;

        for (int x : nums) {
            if (value.count(x)) {
                return true;
            }
            value.insert({x, 1});
            
        }

        return false;
    }
};