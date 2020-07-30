/*
�ε鳫���� C/C++ 53��(���ӽ����̽�) ����2
*/

#include <iostream>

using namespace std;	// main() �Լ� �ȿ��� ����ص� ��

int n;
void set() {
	n = 10;
}

namespace doodle {
	int n;
	void set() {
		n = 20;
	}

	namespace google {
		int n;
		void set();
	}
}

int main() {
	::set();	// ���� set() ȣ��
	doodle::set();	// doodle set() ȣ��
	doodle::google::set();	// google set() ȣ��
	// main �Լ� �ȿ� using namespace doodle; �� �����ϸ�
	// google::set(); ���ε� ȣ�� ����

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;

}

void doodle::google::set() {
	n = 30;
}

/*-----------������-----------
10
20
30
*/