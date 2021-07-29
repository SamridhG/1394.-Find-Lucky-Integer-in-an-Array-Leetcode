class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>A;
        int res=-1;
        for(auto s:arr)
        {
            A[s]++;
        }
        for(auto p:A)
        {
            if(p.first==p.second)
            {
                res=p.first;
            }
        }
        return res;
    }
};
