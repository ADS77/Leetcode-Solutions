class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        bool chk = false;
        for(int i=1;i<n;i++)
        {
            int tmp = arr[i];
            for(int j =0;j<n && i!=j;j++)
            {
                   if(arr[j]==0 && tmp==0)
                       {
                            ;
                    chk = true;
                    return chk;
                    }
                    if(((arr[j]*2==tmp)||(tmp*2==arr[j]))&&(tmp*arr[j]!=0))
                    {
                            ;
                    chk = true;
                    return chk;
                    }

                }
            }


        return chk;

    }
};
