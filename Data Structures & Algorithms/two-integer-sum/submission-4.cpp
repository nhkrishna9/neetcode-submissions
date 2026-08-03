class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    return {i, j};
                }
            }
        }
        */
        /*
        vector<pair<int, int>> A;
        for(int i=0; i<nums.size(); i++){
            A.push_back({nums[i], i});
        }
        std::sort(A.begin(), A.end());
        int l=0, r=A.size()-1;
        while(l<r){
            int curr = A[l].first+A[r].first;
            if(curr == target){
                return {min(A[l].second, A[r].second), max(A[l].second, A[r].second)};
            }
            else if(curr<target){
                l = l+1;
            }
            else {
                r = r-1;
            }
        }
        return {};
        */

        unordered_map<int, int> numsHashTable;

        for(int i=0;i<nums.size(); i++){
            int remainingSum = target - nums[i];
            if(numsHashTable.find(remainingSum) != numsHashTable.end()){
                return {numsHashTable[remainingSum], i};
            }
            numsHashTable[nums[i]] = i;
        }
        return {};

        
    }
};
