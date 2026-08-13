class Solution {
public:
    bool rotateString(string s, string goal) {
        string snew=s+s;
        if(s.length()!=goal.length()) return false;
        return snew.find(goal)!=string::npos;
    }
};