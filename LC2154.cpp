class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> set;
        for(auto ele:nums){
            set.insert(ele);
        }
        
        while(set.find(original)!=set.end()){
            original=2*original;
        }
        return original;
    }
};