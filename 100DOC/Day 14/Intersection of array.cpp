class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int in;
        
        for(int i=0;i<nums1.size();i++){
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
              if(it != nums2.end()){
                in = it-nums2.begin();  
                  v.push_back(nums1[i]);
                  nums2[in] = -1;
              }
            
        }
        return v;
    }
};