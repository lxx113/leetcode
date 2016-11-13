class Solution {
public:
    int reverse(int x) {
        if ( x == INT_MIN) {
            return 0;
        }
        int res = 0;
        int sign = 1;
        if (x < 0) {
            sign = -1;
        }
        int num = abs(x);
        while (num > 0) {
            int r = num%10;
            if (res > INT_MAX/10) {
                return 0;
            }
            if (res == INT_MAX/10 && r >= 7) {
                return 0;
            }
            res = res*10+r;
            num = num/10;
        }
        
        return sign*res;
    }
};
