#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a = -10;
	int b = 7;
	vector<int> p;
	p.push_back(a);
	p.push_back(b);
	cout << p.front() << endl;
	return 0;
}