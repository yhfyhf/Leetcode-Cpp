class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 or n == 2)
            return n;
        int ways[10000];
        ways[0] = 0;
        ways[1] = 1;
        ways[2] = 2;
        for (int i = 3; i <= n; i++)
            ways[i] = ways[i-2] + ways[i-1];
        return ways[n];
    }
};