https://www.codingninjas.com/codestudio/contests/codekaze/problems/18444?leftPanelTab=1

bool isPalindrome(string &s)
{
	// Write your code here.
    int low =0;
    int high = s.size()-1;
    
    while(low<=high){
        if(s[low] == s[high]){
            low++;
            high--;
        }
        else{
            return 0;
            break;
        }
    }
    return 1;
}