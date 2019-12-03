#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ifstream if1;
	ofstream of1;
	
	int n, m, sum = 0;
	
	if1.open("input4.txt");
	of1.open("output4.txt");
	
	if1 >> n >> m;
	
	
	for(int i = n; i < m; i++) {
		sum += i;
		of1 << i << "+";
	}
	
	/*
	do {
		sum += n;
		of1 << n << "+";
		n++;
	} while(n != m);
	*/
	
	of1 << m << "=" << sum;
	
	if1.close();
	of1.close();
	
	return 0;
}
