#include <iostream>
using namespace std;

void print(int n){
	if(n < 0) {
		return;
	}
	cout << n << " ";
	print(n - 2);
}

int main() {
	int num = 5;
	print(num);
}


//5 3 1
