#include <iostream>
#include <fstream>
#include <vector> #c���� �迭

using namespace std;

int main(){
	
	ifstream if1;
	ofstream of1;
	int n;
	int t1,t2;
	vector<int> v; 
	vector<int>::iterator it; //�ݺ���, ������ ��ġ 
	
	if1.open("input.txt");
	of1.open("output.txt");
	
	if1 >> n;
	cout << n << endl;
	
	//3�� �����ϱ� 0������ �ݺ� -> 0�� �Ǹ� false 
	while(n--) {
		
		if1 >> t1 >> t2;
		cout << t1 << " " << t2 << endl;
		v.push_back(t1 + t2); // t1 + t2�� ���� �迭�� ���� ����	 
	}
	
	//Vector �ٷ�� 
	for(it=v.begin(); it!=v.end(); it++) {
		cout << *it << endl;
		of1 << *it << endl; //of1�� output.txt�� ����Ű�� ���� 
	}
	
	if1.close();
	of1.close();
	
	return 0;
} 
