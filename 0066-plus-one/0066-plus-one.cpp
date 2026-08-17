// class Solution {
// public:
//     long long number(vector<int>& digits){
//         long long num=0;
//         for(int i=0;i<digits.size();i++){
//             num=num*10+digits[i];
//         }
//         return num;
//     }
//     vector<int> plusOne(vector<int>& digits) {
//         vector<int> ans;
//         int num=number(digits);
//         int newnum= num+1;
//         while(newnum!=0){
//             int digit=newnum%10;
//             ans.push_back(digit);
//             newnum=newnum/10;
//         }
//      reverse(ans.begin(),ans.end());
//      return ans;
//     }
// };
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};