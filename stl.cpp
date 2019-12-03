#include <iostream>
#include <fstream>
#include <vector> #c언어에서 배열

using namespace std;

int main(){
	
	ifstream if1;
	ofstream of1;
	int n;
	int t1,t2;
	vector<int> v; 
	vector<int>::iterator it; //반복자, 벡터의 위치 
	
	if1.open("input.txt");
	of1.open("output.txt");
	
	if1 >> n;
	cout << n << endl;
	
	//3이 들어오니까 0까지만 반복 -> 0이 되면 false 
	while(n--) {
		
		if1 >> t1 >> t2;
		cout << t1 << " " << t2 << endl;
		v.push_back(t1 + t2); // t1 + t2의 값을 배열의 끝에 삽입	 
	}
	
	//Vector 다루기 
	for(it=v.begin(); it!=v.end(); it++) {
		cout << *it << endl;
		of1 << *it << endl; //of1은 output.txt를 가리키고 있음 
	}
	
	if1.close();
	of1.close();
	
	return 0;
} 
