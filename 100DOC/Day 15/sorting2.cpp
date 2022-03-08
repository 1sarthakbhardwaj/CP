#include<bits/stdc++.h>

int bestInsertPos(vector<int> arr, int n, int m)
{
    arr.push_back(m);
    sort(arr.begin(), arr.end());
    
    auto it = find(arr.begin(), arr.end(), m);
    
    return it-arr.begin();
}