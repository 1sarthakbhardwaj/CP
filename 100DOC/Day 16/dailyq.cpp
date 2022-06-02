https://leetcode.com/problems/transpose-matrix/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
                
        int br = matrix.size();
        int len = matrix[0].size();
        
        vector<vector<int>> vec( len , vector<int> (br, 0)); 
  
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < br; j++)
        {
            vec[i][j] = matrix[j][i];
        }
    }
        return vec;
    }
};

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int> > ans;
        for(int i=0;i<matrix[0].size();i++){
            vector<int> v;
            for(int j=0;j<matrix.size();j++){
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};