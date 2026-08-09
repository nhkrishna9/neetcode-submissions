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
    }
};
