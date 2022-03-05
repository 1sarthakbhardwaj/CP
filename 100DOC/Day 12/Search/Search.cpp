https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381878?leftPanelTab=1

#include<bits/stdc++.h>
int search(int* arr, int n, int key) {
    // Write your code here.
    
     std::vector<int> v (arr,arr+n);
    int a = std::find(v.begin(),v.end(), key)-v.begin();
    
    if(a == n){
        return -1;
    }
    else{
    return a;
    }
}
