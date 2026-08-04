// class Solution {
// public:
//     bool checkIfExist(vector<int>& arr) {
//         sort(arr.begin(), arr.end());
//         int i = 0;
//         int j = arr.size() - 1;
//         while (i < j) {
//             if (arr[i] > 0 && arr[j] > 0) {
//                 if (arr[i] * 2 == arr[j])
//                     return true;
//                 else if (arr[i] * 2 < arr[j]) {
//                     i++;
//                 } else {
//                     j--;
//                 }
//             } else if (arr[i] < 0 && arr[j] < 0) {
//                 if (arr[i] * 2 == arr[j])
//                     return true;
//                 else if (abs(arr[i]) * 2 > abs(arr[j])) {
//                     i++;
//                 } else {
//                     j--;
//                 }
//             }
//         }
//         return false;
//     }
// };/

class Solution {
public:
    bool checkIfExist(vector<int>& arr){
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                if(arr[j] == arr[i]*2 || arr[i] == arr[j]*2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};