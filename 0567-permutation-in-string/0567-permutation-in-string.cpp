class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left=0;int k=s1.length(); sort(s1.begin(),s1.end());
        for(int right=0;right<s2.length();right++){
            if(right-left+1>k){
                left++;
            }if(right-left+1==k){
                    string temp=s2.substr(left,right-left+1);
                     sort(temp.begin(), temp.end());

                    if(s1==temp) return true;
            }
        }
        return false;
    }
};