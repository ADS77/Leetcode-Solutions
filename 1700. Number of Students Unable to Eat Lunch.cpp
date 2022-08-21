class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        deque<int>q;
        stack<int>st;
        for(int i=0; i<n; i++)q.push_back(students[i]);
        for(int i=n-1; i>=0; i--)st.push(sandwiches[i]);
        int cnt = 0,curr_stu;
        while(!st.empty())
        {
            int curr_san = st.top();
            curr_stu = q.front();
            q.pop_front();
            if(curr_stu == curr_san)
            {
                cnt++;
                st.pop();

            }
            else
            {

                deque<int>::iterator itr;
                itr = find(q.begin(), q.end(), curr_san);
                if(itr != q.end())
                {
                    q.push_back(curr_stu);
                }
                else if (itr == q.end())
                {
                    break;
                }
            }

        }
        return (n-cnt);



    }
};
