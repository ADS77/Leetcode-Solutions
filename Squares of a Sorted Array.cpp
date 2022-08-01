class Solution {
public:
   vector< int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
       vector<int>ans;;
       for(int i=0;i<n;i++)ans.push_back(0);
        int tmp = n-1, left = 0, right = n-1;
        while(left<=right)
        {
            if(nums[left]<0) nums[left]*=(-1);
            else if(nums[right]<0) nums[right]*=(-1);
            if(nums[left]<= nums[right])
            {
                ans[tmp--] = nums[right]*nums[right];
                right--;
            }
            else if(nums[left]>nums[right])
            {
                ans[tmp--] = nums[left]*nums[left];
                left++;
            }
        }

        return ans;
    }
};
