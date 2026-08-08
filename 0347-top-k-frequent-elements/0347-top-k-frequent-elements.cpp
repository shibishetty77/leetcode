class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> ans;
        for (auto num : nums) {
            count[num]++;
        }
        int maxf = 0;int maxn=0;
        while (k!=0) {
            maxf = 0;
            for (auto item : count) {
                if (item.second > maxf) {
                    maxf = item.second;
                    maxn=item.first;
                }
            }
            ans.push_back(maxn);
            count.erase(maxn);
            k--;
        }
        return ans;
    }
};