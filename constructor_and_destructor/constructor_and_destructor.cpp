/*
�ε鳫���� C/C++ 56��(��ü�� ������ �Ҹ�) ����1
*/

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() {		// ������
		cout << "������ ȣ���" << endl;
	}

	~MyClass() {	// �Ҹ���
		cout << "�Ҹ��� ȣ���" << endl;
	}
};

MyClass globalObj;	// ���� MyClass ��ü

void testLocalObj() {
	cout << "testLocalObj �Լ� ����" << endl;
	MyClass localObj;	// ���� MyClass ��ü	
	// �ڽ��� ���� �޼����� ���� �Ŀ� ������ ȣ��
	// �ڽ��� ���� �޼��尡 ������ �Ҹ��� ȣ��
	cout << "testLocalObj �Լ� ��" << endl;
}

int main() {
	cout << "main�Լ� ����" << endl;
	testLocalObj();
	cout << "main�Լ� ��" << endl;
}

/*---------������---------
������ ȣ���
main�Լ� ����
testLocalObj �Լ� ����
������ ȣ���
testLocalObj �Լ� ��
�Ҹ��� ȣ���
main�Լ� ��
�Ҹ��� ȣ���
*/