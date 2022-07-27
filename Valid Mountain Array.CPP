class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        int n = arr.size();
        int mx=0, tmp;
        bool chk1 = false, chk2 = false, ok = false ;
        for(int i=0;i<n;i++)mx = max(mx,arr[i]);
        for(int i=0;i<n;i++)if(arr[i]==mx){tmp = i;break;}
        if(tmp== 0 || tmp == n-1)return false;
        for(int i = tmp;i>0;i--)if(arr[i]<=arr[i-1])return false;
        for(int i = tmp;i<n-1;i++)if(arr[i]<=arr[i+1])return false;
        return true;


    }
};
