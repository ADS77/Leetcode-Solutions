class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   int one = m-1,two = n-1;
        int tmp = m+n-1;
       while(one>=0 && two>=0)
            if(nums1[one]>=nums2[two])
            {
                nums1[tmp--] = nums1[one];
                one--;
            }
            else
            {
                nums1[tmp--] = nums2[two];
                two--;

            }


        while(one>=0)
        {
            nums1[tmp--] = nums1[one--];
        }
        while(two>=0)
        {
            nums1[tmp--] = nums2[two--];
        }

    }
};
