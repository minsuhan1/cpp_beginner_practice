/*
두들낙서의 C/C++ 55강(this 포인터) 예제1
*/

#include <iostream>

using namespace std;

class MyClass {
	// 클래스나 struct 안의 멤버 함수들은 this 포인터를
	// 보이지 않는 매개변수 형태로 받는다.
	// 함수 printThis()는 각 객체 안에 존재하는 것이 아니라
	// 다른 공간에 있지만 this 포인터를 통해 printThis를 호출한 객체 주소를 알 수 있다.
public:
	void printThis() {
		cout << "나의 주소는 " << this << endl;
	}
};

int main() {
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.printThis();
	b.printThis();
}

/*---------실행결과---------
a의 주소는 0093FCBF
b의 주소는 0093FCB3
나의 주소는 0093FCBF
나의 주소는 0093FCB3
*/
