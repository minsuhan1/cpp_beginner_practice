/*
두들낙서의 C/C++ 60강(상수형 매개변수와 상수형 메서드) 예제1
*/

// 1. 매개변수의 상수화 (모든 함수)
// 2. 메서드의 상수화 (멤버 메서드)

#include <iostream>

using namespace std;

class Account {
public:
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void deposit(const int d) {	
		// 매개변수를 그대로 사용할 수 있도록(바꿀 수 없도록) 매개변수 상수화

		// d = money (오류-컴파일에 실패함)
		money += d;
		cout << d << "원을 예금했다" << endl;
	}
	void draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했다" << endl;
		}
	}

	int viewMoney() const{	
		// 멤버 변수를 바꿀 수 없도록(컴파일에 실패함) 메서드를 상수화

		// money++;	(오류-컴파일에 실패함)
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

/*-----실행결과-----
100원을 예금했다
20원을 인출했다
180
*/