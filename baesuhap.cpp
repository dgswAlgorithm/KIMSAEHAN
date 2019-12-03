#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	
	ifstream if1;
	ofstream of1;
	
	int n;
	int m;
	int sum = 0;
	
	vector<int> v;
	vector<int>::iterator it;
	
	if1.open("input3.txt");
	of1.open("output3.txt");
	
	if1 >> n >> m;
	
	do {
		if(n % m == 0)		
			v.push_back(n);
	} while(n--);
	
	/*
	while(n != 0) {
		if(n % m == 0)		
			v.push_back(n);			
		n--;
	}
	*/
		
	for(it = v.begin(); it != v.end(); it++)
		sum += *it;		
	
	of1 << sum << endl;
	cout << sum;
	
	if1.close();
	of1.close();
	
	return 0;
}
