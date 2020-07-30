/*
두들낙서의 C/C++ 56강(객체의 생성과 소멸) 예제2
*/

#include <iostream>

using namespace std;

// 생성자: 객체 생성 시 멤버 변수 초기화
// 소멸자: 메모리 해제

// 복소수(real, imag)

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double _real, double _imag) {
		real = _real;
		imag = _imag;
	}
	// 초기화 리스트 형태
	// Complex(double rea, double imag) : real(real), imag(imag) { } 

	double getReal() {
		return real;
	}
	void setReal(double _real) {
		real = _real;
	}
	double getImag() {
		return imag;
	}
	void setImag(double _imag) {
		imag = _imag;
	}

private:
	double real;
	double imag;
};

int main() {
	Complex c1;	// 매개변수가 없는 Complex 생성자 호출됨
	Complex c2 = Complex(2, 3);	// 매개변수가 있는 Complex 생성자 호출됨
	Complex c3(2, 3);	// 위와 같은 표현
	
	// 중괄호를 사용할 수도 있음(균일한 초기화)
	// 괄호 '()' 를 사용하는 경우 C++의 컴파일러가 함수의 정의처럼 보이는 것들을 함수의 정의로 해석하여
	// 객체를 만들지 않고 함수를 정의한 것으로 해석하는 경우가 생김
	// ex) 객체 A의 생성자 A()를 구현하였는데
	// main 함수에서 A a(); 라고 작성한 후 실행했을때 생성자 A()가 호출되지 않고
	// 리턴타입이 A인 함수 a()을 정의한 것으로 컴파일러가 해석

	Complex c4 = { 2,3 };
	Complex c5 = { 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c1 = " << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c1 = " << c3.getReal() << ", " << c3.getImag() << endl;
}

/*---------실행결과---------
c1 = 0, 0
c1 = 2, 3
c1 = 2, 3
*/