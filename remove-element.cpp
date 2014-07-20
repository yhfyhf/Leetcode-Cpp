class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        for (int i = 0; i < n; i++) {
            if (elem == A[i]) {
                for (int j = i; j < n; j++)
                    A[j] = A[j+1];
                n = n - 1;
                i = i - 1;
            }
        }
        return n;
    }
};