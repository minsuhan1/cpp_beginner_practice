/*
두들낙서의 C/C++ 53강(네임스페이스) 예제1
*/

#include <iostream>

using namespace std;

int n;	// 어떤 네임스페이스에도 속하지 않음(전역변수)
void set() {
	::n = 10;	// 명시적 전역변수
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

namespace google {	// namespace google을 떼어서 set() 구현 가능
	void set() {
		google::n = 30;	// n = 30; 도 ok
	}
}

void doodle::set() {	
	// namespace doodle에서는 set() 선언만 하고
	// 구현은 따로 가능
	n = 20;
}

/*-----------실행결과-----------
10
20
30
*/