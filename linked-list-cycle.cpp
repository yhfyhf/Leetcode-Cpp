class Solution {
public:
    int reverse(int x) {
        if (x == 0)
            return 0;
        bool isPositive = x >= 0? true: false;
        if (!isPositive)
            x *= -1;
        vector<int> digits;
        while (x) {
            digits.push_back(x % 10);
            x /= 10;
        }
        vector<int>::iterator it = digits.begin();
        while (*it == 0)
            it++;
        int revInt = 0;
        while (it < digits.end())
            revInt = revInt * 10 + *it++;
        return isPositive? revInt: (-revInt);
    }
};