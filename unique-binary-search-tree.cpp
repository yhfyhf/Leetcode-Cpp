#include <iostream>
using namespace std;

int numTrees(int n) {
	if (n == 0 || n == 1)
		return 1;
	if (n == 2)
		return n;
	else {
		int numTreesGivenRoot = 0;
		for (int root = 1; root <= n; root++)
			numTreesGivenRoot += numTrees(root-1)*numTrees(n-root);
		return numTreesGivenRoot;
	}
}

int main() {
	int n = 3;
	cout << numTrees(n) << endl;
	return 0;
}