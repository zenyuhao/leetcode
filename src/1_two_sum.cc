#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int returns[] = { -1, -1 };
        for(int i=0; i < nums.size(); ++i) {
            for(int j=i+1; j <nums.size(); ++j) {
                if(nums[i] + nums[j] == target) {
                    returns[0] = i;
                    returns[1] = j;
                    return vector<int>(returns, returns+2);
                }            
            }
        }
        return vector<int>(returns, returns+2);
    }
};
