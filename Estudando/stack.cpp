#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> pilha;

	pilha.push(1);
	pilha.push(3);
	pilha.push(7);
	pilha.push(10);

	while (!pilha.empty()) {
		cout << pilha.top() << " " << pilha.size() << endl;
		pilha.pop();
	}

	return 0;
}