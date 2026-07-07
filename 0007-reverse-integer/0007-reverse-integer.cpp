class Solution {
public:
    int reverse(int x) {
        long long p = x;
        long long form = 0;
        while (x != 0) {
            p = x % 10;
            form = form * 10 + p;
            if (pow(-2, 31) > form)
                return 0;
            if (pow(2, 31) - 1 < form)
                return 0;
            x = x / 10;
        }
        return form;
    }
};