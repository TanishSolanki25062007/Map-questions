#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map1;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (map1.find(x) != map1.end()) {
                return {map1[x], i};
            }
            map1[target - x] = i;
        }
        
        return {}; 
    }
};
