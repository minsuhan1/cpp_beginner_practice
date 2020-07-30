/*
�ε鳫���� C/C++ 56��(��ü�� ������ �Ҹ�) ����2
*/

#include <iostream>

using namespace std;

// ������: ��ü ���� �� ��� ���� �ʱ�ȭ
// �Ҹ���: �޸� ����

// ���Ҽ�(real, imag)

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
	// �ʱ�ȭ ����Ʈ ����
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
	Complex c1;	// �Ű������� ���� Complex ������ ȣ���
	Complex c2 = Complex(2, 3);	// �Ű������� �ִ� Complex ������ ȣ���
	Complex c3(2, 3);	// ���� ���� ǥ��
	
	// �߰�ȣ�� ����� ���� ����(������ �ʱ�ȭ)
	// ��ȣ '()' �� ����ϴ� ��� C++�� �����Ϸ��� �Լ��� ����ó�� ���̴� �͵��� �Լ��� ���Ƿ� �ؼ��Ͽ�
	// ��ü�� ������ �ʰ� �Լ��� ������ ������ �ؼ��ϴ� ��찡 ����
	// ex) ��ü A�� ������ A()�� �����Ͽ��µ�
	// main �Լ����� A a(); ��� �ۼ��� �� ���������� ������ A()�� ȣ����� �ʰ�
	// ����Ÿ���� A�� �Լ� a()�� ������ ������ �����Ϸ��� �ؼ�

	Complex c4 = { 2,3 };
	Complex c5 = { 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c1 = " << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c1 = " << c3.getReal() << ", " << c3.getImag() << endl;
}

/*---------������---------
c1 = 0, 0
c1 = 2, 3
c1 = 2, 3
*/