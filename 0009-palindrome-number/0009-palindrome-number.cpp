class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false; 

        long long n = x;
        long long sum = 0;
        long long temp = n;

        while (n > 0) {
            int r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }

        return temp == sum;
    }
};
