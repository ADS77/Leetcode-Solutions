class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
    vector<int>A;
    int n=0;
        while(x)
        {
            A.push_back(x%10);
            x/=10;
            n++;
        }

    int i=0,j=n-1;
    bool chk=true;
    while(i<=j)
    {
        if(A[i]!=A[j])
            chk =false ;

            i++;
            j--;
    }
        return chk;

    }
};
