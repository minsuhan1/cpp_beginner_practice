/*
�ε鳫���� C/C++ 60��(����� �Ű������� ����� �޼���) ����1
*/

// 1. �Ű������� ���ȭ (��� �Լ�)
// 2. �޼����� ���ȭ (��� �޼���)

#include <iostream>

using namespace std;

class Account {
public:
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void deposit(const int d) {	
		// �Ű������� �״�� ����� �� �ֵ���(�ٲ� �� ������) �Ű����� ���ȭ

		// d = money (����-�����Ͽ� ������)
		money += d;
		cout << d << "���� �����ߴ�" << endl;
	}
	void draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����ߴ�" << endl;
		}
	}

	int viewMoney() const{	
		// ��� ������ �ٲ� �� ������(�����Ͽ� ������) �޼��带 ���ȭ

		// money++;	(����-�����Ͽ� ������)
		return money;
	}
private:
	int money;
};

int main() {
	Account doodle(100);

	doodle.deposit(100);
	doodle.draw(20);

	cout << doodle.viewMoney() << endl;
}

/*-----������-----
100���� �����ߴ�
20���� �����ߴ�
180
*/