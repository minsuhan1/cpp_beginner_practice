/*
�ε鳫���� C/C++ 53��(���ӽ����̽�) ����1
*/

#include <iostream>

using namespace std;

int n;	// � ���ӽ����̽����� ������ ����(��������)
void set() {
	::n = 10;	// ����� ��������
}
namespace doodle {
	int n;
	void set();
}
namespace google {
	int n;
	void set();
}

int main() {
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << google::n << endl;
}

namespace google {	// namespace google�� ��� set() ���� ����
	void set() {
		google::n = 30;	// n = 30; �� ok
	}
}

void doodle::set() {	
	// namespace doodle������ set() ���� �ϰ�
	// ������ ���� ����
	n = 20;
}

/*-----------������-----------
10
20
30
*/