#include <iostream>
using namespace std;

int n;

struct node {
	char left;
	char right;
};

struct node arr[27];

void pre(char root) {
	if (root == '.') {
		return;
	}
	else {
		cout << root;
		pre(arr[root].left);
		pre(arr[root].right);
	}
}

void in(char root) {
	if (root == '.') {
		return;
	}
	else {
		in(arr[root].left);
		cout << root;
		in(arr[root].right);
	}
}

void post(char root) {
	if (root == '.') {
		return;
	}

	else {
		post(arr[root].left);
		post(arr[root].right);
		cout << root;
	}
}



int main() {
	cin >> n;

	char a, b, c;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> c;
		arr[a].left = b;
		arr[a].right = c;
	}

	pre('A');
	cout << "\n";

	in('A');
	cout << "\n";

	post('A');
	cout << "\n";

	return 0;
}