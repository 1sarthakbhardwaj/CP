https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381875?leftPanelTab=1

#include<bits/stdc++.h>

void sort012(int *arr, int n)
{
   //   Write your code here
   	int low = 0;
    int mid =0;
    int high = n-1;
    
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
                mid++;
                low++;
            
        }
        
        else if(arr[mid] == 1){
                mid++;
        }
        
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
                high--;
            
        }
    }
}