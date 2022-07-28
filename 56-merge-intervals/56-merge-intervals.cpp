class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> res;
        
        if(intervals.size()==0 || intervals.size()==1)return intervals;
        
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<intervals.size();i++)
        {
            vector<int> val=intervals[i],ans;
            
            int start=val[0],end=val[1];
            ans.push_back(start);
            
            for(int j=i+1;j<intervals.size();j++)
            {
                 vector<int> val1 =intervals[j];
                
                 int start1=val1[0],end1=val1[1];
                
                if(end>=start1)
                {
                    if(end1>end)end=end1;
                    i++;
                }
                else break;
                
            }
            ans.push_back(end);
            res.push_back(ans);
        }
        
        
        return res;
    }
};