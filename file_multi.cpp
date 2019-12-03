#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	
	ifstream if1; // file_input_stream
	ofstream of1; // file_output_stream
	int n; // �ݺ��� Ƚ�� 
	int t1, t2, t3; // ���� ���� ���� 
	vector<int> v; // ������ ���� ���� ����Ʈ 
	vector<int>::iterator it;
	
	if1.open("input2.txt");
	of1.open("output2.txt"); // ����� ����� output2.txt ����
	
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
