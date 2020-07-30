/*
두들낙서의 C/C++ 57강(생성자의 다양한 사용 방법) 예제1
*/

#include <iostream>

using namespace std;

class Time {
public:
	Time() : h(0), m(0), s(0) {	}
	Time(int s_) : Time() {	// 생성자 위임: 특정 생성자에서 자신의 클래스 내의 다른 생성자를 호출
		s = s_;
	}
	Time(int m_, int s_) : Time(s_) {
		m = m_;
	}
	Time(int h_, int m_, int s_) : Time(m_, s_) {
		h = h_;
	}

	int h;
	int m;
	int s;
};

int main() {
	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(2, 42, 15);

	cout << "t1 : " << t1.h << ":" << t1.m << ":" << t1.s << endl;
	cout << "t2 : " << t2.h << ":" << t2.m << ":" << t2.s << endl;
	cout << "t3 : " << t3.h << ":" << t3.m << ":" << t3.s << endl;
	cout << "t4 : " << t4.h << ":" << t4.m << ":" << t4.s << endl;
}

/*-------실행결과--------
t1 : 0:0:0
t2 : 0:0:5
t3 : 0:3:16
t4 : 2:42:15
*/