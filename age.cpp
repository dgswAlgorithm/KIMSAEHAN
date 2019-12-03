#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	freopen("input5.txt", "rt", stdin);
	freopen("output5.txt", "wt", stdout);
	
	int n, i, a, max = -200, min = 200;
	
	cin >> n;
	
	for(i = 1; i <= n; i++) {
		cin >> a;
		
		if(a > max)
			max = a;
		else if(a < min)
			min = a;
	}
	
	cout << "max: " << max << " " << "min: " << min << endl;
	
	/*
	ifstream if1;
	ofstream of1;
	
	int min = 0;
	int max = 0;
	int n;
	int t1;
	
	if1.open("input5.txt");
	of1.open("output5.txt");
	
	if1 >> n;
	if1 >> min;
	cout << "n: " << n << endl;	
	
	while(n--) {
		if1 >> t1;
		
		if(max < t1)
			max = t1;
		if(min > t1)
			min = t1;
	}
	
	cout << "max: " << max << " " << "min: " << min << endl;
	
	if1.close();
	of1.close();
	*/
	
	return 0;
}
