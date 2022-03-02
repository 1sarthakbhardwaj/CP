https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381873?leftPanelTab=1

// TLE
#include<bits/stdc++.h>

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	// Write your code here.
    int m = k-1;
    while(m--){
        for(long long i=0;i<n;i++){
            arr.push_back(arr[i]);
        }
    }
    long long sum =0;
    long long msum = 0;
    
    for(long long i=0;i<arr.size();i++){
        sum += arr[i];
        if(sum<0){
            sum = 0;
        }
        
        msum = max(sum,msum);
       
    }
    if(msum == 0){
        msum = *max_element(arr.begin(), arr.end());
    }
    return msum;
}