#include <iostream>
#include <vector>
using namespace std;

int str2i(string s) {
	bool isPositive = true;
	if (s[0] == '-') 
		isPositive = false;
	int i = isPositive? 0:1;
	int ret = 0;
	for (; i < s.size(); ++i) 
		ret = ret * 10 + s[i] - '0'; 
	return isPositive? ret:(-ret);
}

int evalRPN(vector<string> &tokens) {
	vector<string>::iterator it = tokens.begin();
	vector<int> temp;
	while (it < tokens.end()) {
		if (*it == "+" || *it == "-" || *it == "*" || *it == "/") {
			int num1, num2;
			num2 = temp.back();
			temp.pop_back();
			num1 = temp.back();
			temp.pop_back();
			if (*it == "+")
				temp.push_back(num1 + num2); 
			else if (*it == "-")
				temp.push_back(num1 - num2);
			else if (*it == "*")
				temp.push_back(num1 * num2);
			else
				temp.push_back(num1 / num2);
		}
		else {
			temp.push_back(str2i(*it));
		}
		it++;
	}
	return temp[0];
}

int main() {
	vector<string> tokens;
	tokens.push_back("18");
/*	tokens.push_back("13");
	tokens.push_back("5");
	tokens.push_back("/");
	tokens.push_back("+");*/
	cout << evalRPN(tokens) << endl;
	return 0;
}