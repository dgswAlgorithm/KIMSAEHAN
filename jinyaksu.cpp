#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i, num, sum = 0;
	
	freopen("input6.txt", "rt", stdin);
	freopen("output6.txt", "wt", stdout);
	
	cin >> num;
	
	//���� ū ����� �ڽ�/2 �����ۿ� �ȉ� 
	for(i = 1; i <= num / 2 - 1; i++) {
		if(num % i == 0) {
			sum += i;
			cout << i << " + "; 
		}			
	}
	
	sum += num / 2;
	cout << num / 2 << " = " << sum;
	
	return 0;
}
