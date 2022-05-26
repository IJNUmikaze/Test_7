#include<iostream>
#include"Sub.h"
#include"Base.h"
using namespace std;
int main() {
	Sub b;
	b.fx();
	cout << b.n;
	return 0;
}