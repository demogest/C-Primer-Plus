#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
	string s1=""; int sum=0,temp=0; string ch="";
	cin >> s1;
	int n = s1.size();
	for (int i = 0; i < n; i++) {
		if (s1[i] >= '0'&&s1[i] <= '9') {
			ch = ch + s1[i];
		}
		else if (ch != "") {
			for (int j = 0; j < ch.size(); j++) {
				temp = temp * 10 + ch[j] - '0';
			}
			sum = sum + temp;
			temp = 0;
			ch = "";
		}
	}
	cout << "SUM:" << sum << "\n";
	system("pause");
	return 0;
}