https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381872?leftPanelTab=1

#include<bits/stdc++.h>
int flipBits(int* arr, int n) 
{
    int count =0;
    int sum =0;
    int msum =INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;
            arr[i] = -1;
        }
        else{
            arr[i] =1;
        }
        sum += arr[i];
        if(sum<0){
            sum =0;
        }
       
        msum = max(sum,msum);
    }
    return msum + count;
}