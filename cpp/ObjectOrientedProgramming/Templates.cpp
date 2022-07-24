#include <iostream>

using namespace std;

void swap(int& a, int& b) {

	int tmp = a;
	a = b;
	b = tmp;

}

int main() {

	int a = 5;
	int b = 7;

	cout << a << " - " << b << endl;

	return 0; 
}