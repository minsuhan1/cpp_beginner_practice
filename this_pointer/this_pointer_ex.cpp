/*
�ε鳫���� C/C++ 55��(this ������) ����1
*/

#include <iostream>

using namespace std;

class MyClass {
	// Ŭ������ struct ���� ��� �Լ����� this �����͸�
	// ������ �ʴ� �Ű����� ���·� �޴´�.
	// �Լ� printThis()�� �� ��ü �ȿ� �����ϴ� ���� �ƴ϶�
	// �ٸ� ������ ������ this �����͸� ���� printThis�� ȣ���� ��ü �ּҸ� �� �� �ִ�.
public:
	void printThis() {
		cout << "���� �ּҴ� " << this << endl;
	}
};

int main() {
	MyClass a, b;

	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.printThis();
	b.printThis();
}

/*---------������---------
a�� �ּҴ� 0093FCBF
b�� �ּҴ� 0093FCB3
���� �ּҴ� 0093FCBF
���� �ּҴ� 0093FCB3
*/
