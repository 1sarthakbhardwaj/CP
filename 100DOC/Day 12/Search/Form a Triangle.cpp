https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381879?leftPanelTab=1

#include<bits/stdc++.h>
bool possibleToMakeTriangle(vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    int fs, st, tf;
    
    for(int i=0;i<arr.size()-2;i++){
        fs = arr[i] + arr[i+1];
        st = arr[i+1] + arr[i+2];
        tf = arr[i] + arr[i+2];
        
        if((fs>arr[i+2]) && (st > arr[i]) && (tf > arr[i+1])){
            return true;
            break;
        }
    }
    return false;
}