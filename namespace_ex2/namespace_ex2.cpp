/*
두들낙서의 C/C++ 53강(네임스페이스) 예제2
*/

#include <iostream>

using namespace std;	// main() 함수 안에서 사용해도 됨

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
	::set();	// 전역 set() 호출
	doodle::set();	// doodle set() 호출
	doodle::google::set();	// google set() 호출
	// main 함수 안에 using namespace doodle; 을 선언하면
	// google::set(); 으로도 호출 가능

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;

}

void doodle::google::set() {
	n = 30;
}

/*-----------실행결과-----------
10
20
30
*/