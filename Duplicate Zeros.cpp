class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zero=0,num=0;
        int i=0,tmp=0;
         while(tmp<n-1)
        {
            if(arr[i]==0)
            {
                zero++;
                tmp+=2;
                arr[i]=-1;
            }
            else
            {
                num++;
                tmp++;
            }
            i++;
        }
        i=n-1-zero;
        tmp = n-1;
        for(i;i>=0;i--)
        {
            if(arr[i]==-1)
            {
                arr[tmp--]=0;
                arr[tmp--]=0;
            }
            else
                arr[tmp--]=arr[i];
        }
    }
};
