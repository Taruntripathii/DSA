class Solution {
public:
    int reverse(int x) {
        long long temp = 0;

        while (x != 0) {
            int last = x % 10;
            temp = temp * 10 + last;
            x = x / 10;
        }

        if (temp < INT_MIN || temp > INT_MAX)
            return 0;

        return (int)temp;
    }
};
