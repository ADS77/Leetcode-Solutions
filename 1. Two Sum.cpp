class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int tmp = target - nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(tmp==nums[j])
                {

                    return {i, j};
                }
            }
        }
return {0,0};
    }
};
