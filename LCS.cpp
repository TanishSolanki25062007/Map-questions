class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==0){
            return 0;
        }
        map<int,int>map1;
        for(int i = 0 ; i < n ; i++){
            map1[nums[i]]++;
        }
        int count=1;
        int maximum = 1;
        map<int,int>::iterator x = map1.begin();
        int prev = x->first;
        x++;
        int curr = x->first;
        while(x!=map1.end()){
            if(curr-prev!=1){
                count=1;
            }
            else{
                count++;
            }
            prev=curr;
        x++;
            curr=x->first;
            maximum=max(count,maximum);
            if(x==map1.end()){
                break;
            }
        }
        return maximum;
    }
};
