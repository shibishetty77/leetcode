class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;int right=(int)s.length()-1;
        for(char &c:s){
            c=tolower(c);
        }
        while(left<right){
            while((left<right) && !isalnum(s[left])) left++;
            while((left<right) &&  !isalnum(s[right])) right--;
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};