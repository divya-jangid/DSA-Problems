class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(auto x:nums){
            sum1+=x;
        }
        for(int i=0;i<=nums.size();i++){
            sum2+=i;
        }
        return sum2-sum1;
    }
};