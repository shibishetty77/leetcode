class Solution {
public:
    bool isPalindrome(int x) {
        long long revno = 0;int dup=x;
        if (x < 0)
            return false;
        while (x > 0) {
            int ld = x % 10;
            revno = revno * 10 + ld;
            x = x / 10;
        }
        if (dup == revno) {
            return true;
        }
    return false;
    }
};