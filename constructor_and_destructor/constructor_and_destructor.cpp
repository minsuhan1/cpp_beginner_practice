/*
두들낙서의 C/C++ 56강(객체의 생성과 소멸) 예제1
*/

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() {		// 생성자
		cout << "생성자 호출됨" << endl;
	}

	~MyClass() {	// 소멸자
		cout << "소멸자 호출됨" << endl;
	}
};

MyClass globalObj;	// 전역 MyClass 객체

void testLocalObj() {
	cout << "testLocalObj 함수 시작" << endl;
	MyClass localObj;	// 지역 MyClass 객체	
	// 자신이 속한 메서드의 시작 후에 생성자 호출
	// 자신이 속한 메서드가 끝나면 소멸자 호출
	cout << "testLocalObj 함수 끝" << endl;
}

int main() {
	cout << "main함수 시작" << endl;
	testLocalObj();
	cout << "main함수 끝" << endl;
}

/*---------실행결과---------
생성자 호출됨
main함수 시작
testLocalObj 함수 시작
생성자 호출됨
testLocalObj 함수 끝
소멸자 호출됨
main함수 끝
소멸자 호출됨
*/