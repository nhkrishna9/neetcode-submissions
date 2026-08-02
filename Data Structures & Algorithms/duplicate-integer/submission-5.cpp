class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        /*
        int size= nums.size();
        for(int i=0; i<size;i++){
            for(int j=i+1; j<size; j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }        
        return false;
        */
        if (nums.empty()) return false;
        std::sort(nums.begin(), nums.end());
        for(int i=0; i < nums.size() - 1; i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};