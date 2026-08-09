class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int j = 0, a = 1;

        if (strs.empty()) return "";

        for (int z = 0; z < strs.size(); z++) {
            if (strs[z].empty()) {
                return "";
            }
        }

        while (a && j < strs[0].size()) {
            for (int i = 1; i < strs.size(); i++) {
                if (j >= strs[i].size() ||
                    j >= strs[i - 1].size() ||
                    strs[i][j] != strs[i - 1][j]) {
                    
                    a = 0;
                    break;
                }
            }

            if (a) {
                ans.push_back(strs[0][j]);
                j++;
            }
        }

        return ans;
    }
};