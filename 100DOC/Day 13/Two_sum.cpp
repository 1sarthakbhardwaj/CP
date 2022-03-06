class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int t;
        vector<int>ans;
        std::vector<int>::iterator it;
        for(int i=0;i<nums.size();i++){
            t = target - nums[i];
            
            auto it = find (nums.begin()+i+1, nums.end(), t);
            if (it != nums.end()){
                int index = it - nums.begin();
                ans.push_back(i);
                ans.push_back(index);
                break;
            }     
        }
        return ans;
    }
};