class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        int ans = nums[0];
        for(int i=1;i<nums.size(); i++){
            ans = ans^nums[i];
        }
        return ans;
        */
        /*
        for(int i=0;i<nums.size();i++){
            bool foundOnce = true;
            for(int j=0; j<nums.size();j++){
                if(i!=j && nums[i] == nums[j]){
                    foundOnce = false;
                    break;
                }
            }
            if(foundOnce){
                return nums[i];
            }

        }
        return -1;
        */
        /*
        unordered_set<int> hash;
        for(int num:nums){
            if(hash.find(num)==hash.end()){
                hash.insert(num);
            }
            else{
                hash.erase(num);
            }
        }
        return *hash.begin();
        */
        sort(nums.begin(), nums.end());
        int i=0;
        for(;i<nums.size()-1;){
            if(nums[i] == nums[i+1]){
                i+=2;
                continue;
            }else{
                return nums[i];
            }
        }
        return nums[i];

        for (int i = 0; i < nums.size() - 1; i += 2) {
        if (nums[i] != nums[i + 1])
            return nums[i];
        }
        return nums.back();
    }
};
