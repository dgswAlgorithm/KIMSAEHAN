#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	
	ifstream if1; // file_input_stream
	ofstream of1; // file_output_stream
	int n; // 반복할 횟수 
	int t1, t2, t3; // 파일 안의 숫자 
	vector<int> v; // 숫자의 곱을 담을 리스트 
	vector<int>::iterator it;
	
	if1.open("input2.txt");
	of1.open("output2.txt"); // 결과를 출력할 output2.txt 생성
	
	if1 >> n; 
	
	while(n--) {
		
		if1 >> t1 >> t2 >> t3;
		v.push_back(t1 * t2 * t3);
	} 
	
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
		of1 << *it << endl;
	}
	
	if1.close();
	of1.close();
	
	return 0;
}
