class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int>answer;
        map<int,int>map1;
        for(int i=0;i<nums.size();i++)
            map1[nums[i]]++;
        vector<pair<int,int>>vec;
        for(auto x : map1)
            vec.push_back(pair(x.second,x.first));
        sort(vec.rbegin(),vec.rend());
        for(int i=0;i<vec.size() && k!=0 ;i++)
        {
            answer.push_back(vec[i].second);
            k--;
        }       
        return answer; 
    }
};


