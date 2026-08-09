class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int xorOfAllNums=0;
        for(int num:nums){
            xorOfAllNums ^= num;
        }
        int lastsetbitOfxorOfAllNums = xorOfAllNums & ~(xorOfAllNums-1);

        int a = 0, b=0;
        for(int num:nums){
            if(num & lastsetbitOfxorOfAllNums){
                a = a ^ num;
            }
            else{
                b = b ^ num;
            }
        }

        return {a,b};
        /*
        vector<int> lastsetbitOfxorOfAllNumsIsSet;
        vector<int> lastsetbitOfxorOfAllNumsIsNotSet;

        for(int num:nums){
            if(num & lastsetbitOfxorOfAllNums){
                lastsetbitOfxorOfAllNumsIsSet.push_back(num);
            }
            else{
                lastsetbitOfxorOfAllNumsIsNotSet.push_back(num);
            }
        }

        vector<int> ans;
        int tmp=0;
        for(int num:lastsetbitOfxorOfAllNumsIsSet){
            tmp^=num;
        }
        ans.push_back(tmp);
        tmp=0; // resetting tmp
        for(int num:lastsetbitOfxorOfAllNumsIsNotSet){
            tmp^=num;
        }
        ans.push_back(tmp);

        return ans;
        */
        
    }
};